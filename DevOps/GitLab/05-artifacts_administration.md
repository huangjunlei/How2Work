# 制品管理

## 一、定义

### 制品

>Artifacts is a list of files and directories which are attached to a job after it completes successfully.

制品（Artifacts）概念源自传统制造业，在持续集成引入软件业后，该术语用于描述编译出的文件，将编译类比为生产活动。

### 制品库

制品库用于存放编译出的产品包，包括测试通过和测试失败的版本，通过验收的产品包，将迁移至产品库，供发布和部署。

## 二、需求

* 立足于 GitLab 能力设计制品管理，简化工具栈。
* 有序管理编译出的产品包：
    * 产品包存放标准化
    * 开发人员便捷获取
    * 最小授权
* 有限保持编译出的产品包，过期清理。

## 三、解决方案

创建专用制品库服务器，并基于 GitLab 制品功能完成制品流转与存档等管理。

1. 专用制品库服务器：缓解 GitLab 服务所在机器的存储压力；减少多职责引发的管理混乱。
2. 基于dependencies特性，实现编译出的制品流转至制品库及测试 job，通过测试后存入产品库。
3. 基于 GitLab UI，实现开发人员对制品的查看、获取的需求。
4. 基于 Artifacts的过期设置，实现自动清理。

### 3.1 配置 dependencies 支持制品在 job 间流转

以一个示例说明，目标编译两个平台的版本（osx 及 linux），并分别在两个平台上进行测试。在 build job（`build:osx` 、`build:linux`j）中，指定制品来源的路径（`paths：`）；在test job （`test:osx`、`test:linux`）中指定从哪个上游 job 中获取制品包

```yml
build:osx:
  stage: build
  script: make build:osx
  artifacts:
    paths:
      - binaries/

build:linux:
  stage: build
  script: make build:linux
  artifacts:
    paths:
      - binaries/

test:osx:
  stage: test
  script: make test:osx
  dependencies:
    - build:osx

test:linux:
  stage: test
  script: make test:linux
  dependencies:
    - build:linux

deploy:
  stage: deploy
  script: make deploy
```

### 3.2 关于制品的控制信息

请参考.gitlab-ci.yml中涉及artifacts的小节，包括：

* 哪些纳入到制品范围
* 如何命名
* 过期时间
* ...

<https://docs.gitlab.com/ee/ci/yaml/README.html#artifacts>


## 四、GitLab 能力

GitLab 版本选择 V8.17或更新的版本，GitLab Runner 选择 V1.0或更新的版本。支持以下能力：

* 基于.gitlab-ci.yml来定义Artifacts
* 基于浏览器，浏览Artifacts
* 基于浏览器，下载Artifacts
* 基于浏览器，清除Artifacts
* 检索特定的Artifacts
* 可以在不同 job 之间，传递Artifacts

![浏览下载制品](img/download-artifacts.png)

### 注意

GitLab关于制品包大小上限及保存时间有全局默认值(100M,30天)，需根据需要调整。
<https://docs.gitlab.com/ee/user/admin_area/settings/continuous_integration.html#maximum-artifacts-size-core-only>
<https://docs.gitlab.com/ee/user/admin_area/settings/continuous_integration.html#default-artifacts-expiration-core-only>

## 参考链接

* 管理描述 <https://docs.gitlab.com/ee/administration/job_artifacts.html>
* 功能描述 <https://docs.gitlab.com/ee/user/project/pipelines/job_artifacts.html>
* 约束条件 <https://docs.gitlab.com/runner/executors/#compatibility-chart)>
* 执行依赖 <https://docs.gitlab.com/ee/ci/yaml/README.html#dependencies>
* yaml文件中如何配置制品信息 <https://docs.gitlab.com/ee/ci/yaml/README.html#artifacts>
* what‘s YAML <https://yaml.org/>