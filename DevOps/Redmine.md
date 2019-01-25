# Redmine：如何发邮件提醒？

## 需求

登录Redmine后，在“我的工作台”里能看到与自己相关的内容。这种模式属于“拉取式”。好处是不打扰开发者，弊端是面对响应会不及时。

作为补充，需要能提供“推送式”信息服务。

方案：利用邮箱软件的提醒功能，实现消息的推送。

## Redmine 的部署结构

    WebBrowser => httpd/lighttpd 
                    |--> Ruby on Rails 
                        |--> MySQL

![abc](img/RubyOnRail.jpg)

## 配置过程

1. 获取邮箱服务商配置信息
2. 配置为 Redmine 配置邮件服务信息
3. 重启 lighttpd 服务
4. 配置 Redmine 服务所在机器上DNS 服务信息
5. 验证结果

### 1. 获取邮箱服务商配置信息

以企业邮箱的代表企业网易邮箱为例，可通过下面网页查到相关信息。

网易查询页面：https://qiye.163.com/help/client-profile.html

关注 smtp 相关配置：（1）stmp 服务地址，（2）端口，（3）是否SSL

### 2. 配置为 Redmine 配置邮件服务信息

找到 Redmine 的配置目录，一般如下：`redmine/config/`

用 vi 编辑配置文件：

`vi configuration.yml`

找到以下内容
```
default:
  # Outgoing emails configuration (see examples above)
  email_delivery:
    delivery_method: :smtp
    smtp_settings:
      address: smtp-relay.gmail.com
      port: 587
      domain: smtp-relay.gmail.com
      authentication: :plain
      user_name: your_email@gmail.com
      password: your_password
```
根据第一步获取的 smtp 服务信息，修改 address、port、domain、user_name、password。

说明：
* SSL 不是必选的，如果启用，则要配置邮件厂商提供的端口。
* address与domain可以配一样，用英文双引号包围。
* default为全局的默认值，也是级别最低的，

### 3. 重启 lighttpd 服务

重启 lighttpd 服务触发加载修改后的配置信息。

`/etc/init.d/lighttpd restart`

### 4. 配置 Redmine 服务所在机器上DNS 服务信息

`vi /etc/resolv.conf`

添加规则 例如:

`nameserver 114.114.114.114`

配置完后，ping 以下smtp 服务器地址，确认配置起效。

#### 备选 DNS 服务地址
A、DNSPod DNS+：DNSPod的 Public DNS+是目前国内第一家支持ECS的公共DNS，是DNSPod推出的公共域名解析服务，可以为全网用户提供域名的公共递归解析服务！DNS 服务器 IP 地址：

* 首选：119.29.29.29
* 备选：182.254.116.116

B、114DNS：国内用户量巨大的DNS，访问速度快，各省都有节点，同时满足电信、联通、移动各运营商用户，可以有效预防劫持。DNS 服务器 IP 地址：

* 首选：114.114.114.114
* 备选：114.114.114.115

C、阿里 AliDNS：阿里公共DNS是阿里巴巴集团推出的DNS递归解析系统，目标是成为国内互联网基础设施的组成部分，面向互联网用户提供“快速”、“稳定”、“智能”的免费DNS递归解析服务。DNS 服务器 IP 地址：

* 首选：223.5.5.5
* 备选：223.6.6.6

### 5. 验证结果

进入管理员的配置页面，在邮件配置页面可以测试邮件发送效果。

注意：该页修改后，要先保存，再点击发送测试邮件。

## 思考题

由于 Redmine 每天的业务量很大时，会触发发送大量邮件。如果被邮件服务器禁用怎么办？

## 扩展阅读

* http://rubyonrails.org/
* http://www.redmine.org/projects/redmine/wiki/EmailConfiguration#Example-configurationyml-Configurations
