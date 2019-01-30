# 基于阿里云ECS演示CMake基本使用

## 实验环境

```
Welcome to Alibaba Cloud Elastic Compute Service !
[root@myecs]#uname -a
Linux 3.10.0-514.26.2.el7.x86_64 #1 SMP Tue Jul 4 15:04:05 UTC 2017 x86_64 x86_64 x86_64 GNU/Linux
```
## install CMake

ECS 默认没有安装 CMake，需自行安装，安装命令及结果检查如下。详细过程输出参考，参见附一
```
[root@myecs]#yum install cmake
[root@myecs]#cmake -version
cmake version 2.8.12.2
```

## 附录

### 附一 CMAKE 安装过程

```
[root@myecs]# yum install cmake
已加载插件：fastestmirror
Repodata is over 2 weeks old. Install yum-cron? Or run: yum makecache fast
base                                                     | 3.6 kB     00:00     
epel                                                     | 4.7 kB     00:00     
extras                                                   | 3.4 kB     00:00     
updates                                                  | 3.4 kB     00:00     
(1/6): base/7/x86_64/group_gz                              | 166 kB   00:00     
(2/6): extras/7/x86_64/primary_db                          | 156 kB   00:00     
(3/6): epel/x86_64/updateinfo                              | 956 kB   00:00     
(4/6): updates/7/x86_64/primary_db                         | 1.4 MB   00:00     
(5/6): base/7/x86_64/primary_db                            | 6.0 MB   00:00     
(6/6): epel/x86_64/primary_db                              | 6.6 MB   00:00     
Determining fastest mirrors
正在解决依赖关系
--> 正在检查事务
---> 软件包 cmake.x86_64.0.2.8.12.2-2.el7 将被 安装
--> 正在处理依赖关系 libarchive.so.13()(64bit)，它被软件包 cmake-2.8.12.2-2.el7.x86_64 需要
--> 正在检查事务
---> 软件包 libarchive.x86_64.0.3.1.2-10.el7_2 将被 安装
--> 解决依赖关系完成

依赖关系解决

================================================================================
 Package            架构           版本                      源            大小
================================================================================
正在安装:
 cmake              x86_64         2.8.12.2-2.el7            base         7.1 M
为依赖而安装:
 libarchive         x86_64         3.1.2-10.el7_2            base         318 k

事务概要
================================================================================
安装  1 软件包 (+1 依赖软件包)

总下载量：7.4 M
安装大小：27 M
Is this ok [y/d/N]: y
Downloading packages:
(1/2): libarchive-3.1.2-10.el7_2.x86_64.rpm                | 318 kB   00:00     
(2/2): cmake-2.8.12.2-2.el7.x86_64.rpm                     | 7.1 MB   00:00     
--------------------------------------------------------------------------------
总计                                                28 MB/s | 7.4 MB  00:00     
Running transaction check
Running transaction test
Transaction test succeeded
Running transaction
  正在安装    : libarchive-3.1.2-10.el7_2.x86_64                            1/2 
  正在安装    : cmake-2.8.12.2-2.el7.x86_64                                 2/2 
  验证中      : cmake-2.8.12.2-2.el7.x86_64                                 1/2 
  验证中      : libarchive-3.1.2-10.el7_2.x86_64                            2/2 

已安装:
  cmake.x86_64 0:2.8.12.2-2.el7                                                 

作为依赖被安装:
  libarchive.x86_64 0:3.1.2-10.el7_2                                            

完毕！
[root@myecs]# cmake -version
cmake version 2.8.12.2
```