# 基于 GitLab搭建 CI 环境

##
软件开发阶段
一般情况下，软件开发经过 10 个主要阶段；GitLab 为这 10 个阶段依次提供了解决方案：

* IDEA： 每一个从点子开始的项目，通常来源于一次闲聊。在这个阶段，GitLab 集成了Mattermost。
* ISSUE： 最有效的讨论一个点子的方法，就是为这个点子建立一个工单讨论。你的团队和你的合作伙伴可以在工单追踪器issue tracker中帮助你去提升这个点子
* PLAN： 一旦讨论得到一致的同意，就是开始编码的时候了。但是等等！首先，我们需要优先考虑组织我们的工作流。对于此，我们可以使用工单看板Issue Board。
* CODE： 现在，当一切准备就绪，我们可以开始写代码了。
* COMMIT： 当我们为我们的初步成果欢呼的时候，我们就可以在版本控制下，提交代码到功能分支了。
* TEST： 通过GitLab CI，我们可以运行脚本来构建和测试我们的应用。
* REVIEW： 一旦脚本成功运行，我们测试和构建成功，我们就可以进行代码复审code review以及批准。
* STAGING：： 现在是时候将我们的代码部署到演示环境来检查一下，看看是否一切就像我们预估的那样顺畅——或者我们可能仍然需要修改。
* PRODUCTION： 当一切都如预期，就是部署到生产环境的时候了！
* FEEDBACK： 现在是时候返回去看我们项目中需要提升的部分了。我们使用周期分析 Cycle Analytics来对当前项目中关键的部分进行的反馈。

简单浏览这些步骤，我们可以发现，提供强大的工具来支持这些步骤是十分重要的。在接下来的部分，我们为 GitLab 的可用工具提供一个简单的概览。

链接：https://www.jianshu.com/p/ef8cd7487a6f

## GitLab 的工作流程
![基于GitLab的 CI/CD工作流程](img/cicd_pipeline_infograph.png)

## 制品包的版本号

如果能直接将gitlab的tag与自动生成的软件版本做成一致的话,在后续的维护上会更加方便.于是研究了一番如何将tag作为版本号硬编译进程序中的方法.主要是一下几个方面:

* 在gitlab-ci.yml中,通过

```yml
  only:
      - tags
```

指定只对tag生效

* gitlab-ci.yml中内置 $CI_COMMIT_REF_NAME 得到当前的tag

### 使用c++

* 生成version.h文件,在gitlab-ci.yml中

```yml
  - echo "#pragma once" > inc/version.h
  - echo "#define __VERSION__  \"$CI_COMMIT_REF_NAME\"" >> inc/version.h
```

*  在代码中通过 #include "version.h" 并使用 __VERSION__ 宏来操作版本号

### 参考链接

* 基于 tag 生成版本号 https://www.jianshu.com/p/786fbebd3a97
* CI 整体介绍 https://scarletsky.github.io/2016/07/29/use-gitlab-ci-for-continuous-integration/
* GitLab 支持的 yaml 文件的语法 http://docs.gitlab.com/ce/ci/yaml/README.html#cache
* 基于GitLab的工作流程设计 https://www.jianshu.com/p/ef8cd7487a6f
