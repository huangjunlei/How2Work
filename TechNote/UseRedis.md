# Redis 应用笔记

## 1.基于阿里云

[阿里云 Redis 产品](https://www.aliyun.com/product/kvstore?spm=5176.224200.h2v3icoap.64.12306ed6LwRZ2q&aly_as=WAJZGXwY)

云数据库Redis版（ApsaraDB for Redis）是兼容开源Redis协议标准、提供内存加硬盘的混合存储方式的数据库服务，基于高可靠双机热备架构及可平滑扩展的集群架构，满足高读写性能场景及弹性变配的业务需求。

## 2.基于 Redis 官方云服务

[Redislab.com](https://www.redislabs.com/)

Modern businesses depend on the power of real-time data. With Redis Labs, organizations deliver instant experiences in a highly reliable and scalable manner. Redis Labs is the home of Redis, the world’s most popular in-memory database, and commercial provider of Redis Enterprise that delivers superior performance, matchless reliability and unparalleled flexibility for personalization, machine learning, IoT, search, ecommerce, social and metering solutions worldwide.

## 3. 云数据库Redis版与自建Redis的对比

https://help.aliyun.com/document_detail/134776.html?spm=a2c4g.11186623.6.565.77e32764eHScuP

## 4. 管理 Redis 服务

### 4.1 参考资料

### 4.2 管理工具

#### [DMS for Redis](https://www.aliyun.com/product/dms?spm=a2c4g.11186623.h2v3icoap.78.49f85eb7f7IeAi)

阿里云官方推出的关于 Redis 服务的管理工具，最大的优势是与 Redis 服务的高度整合，附带的好处是一款工具可以管理阿里云上几乎所有的数据库类产品。包括的功能：

* 数据管理
* 性能检测
* 更多参考 [DMS for Redis](https://help.aliyun.com/document_detail/47680.html?spm=a2c4g.11186623.3.3.74295e06JzZvFK)

#### Redis Desktop Manager

* 简介：一款基于Qt5的跨平台Redis桌面管理软件，支持: Windows, MacOS, Ubuntu。
* 地址： https://github.com/uglide/RedisDesktopManager

#### Redis Client

* 简介：使用Java编写，功能丰富，缺点是性能稍差，网络不好时，会不时断线。
* 地址：https://github.com/caoxinyu/RedisClient

#### Redis Studio

* 简介：C++编写的redis管理工具。
* 地址：https://github.com/cinience/RedisStudio

#### 基于 redis 客户端的命令行管理

**批量执行操作**

将需要批量执行的Redis命令写入一个.txt文件中，通过redis-cli批量执行该文件中的命令，实现小规模或者临时的数据修改与测试.

假设要执行的命令存入batchcmd.txt，其格式如下：

```bash
SET key1 value1
SET key2 value2
GET key2
```

执行以下命令

```bash
cat ./batchcmd.txt | redis-cli -h host -a password
```

【说明】

* host为Redis实例的连接地址。
* password为Redis实例的认证密码。
* 命令行会逐行输出各命令的执行结果。