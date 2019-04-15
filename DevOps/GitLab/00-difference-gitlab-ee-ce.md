# 选型对比：GitLab 企业版与社区版

如果选择基于 GitLab 来搭建CI 或 CD，紧接着就要面临一道选择题：企业版 or 社区版？

特性对比见<https://about.gitlab.com/pricing/self-managed/feature-comparison/>

GitLab 本身推荐下载和使用GitLab Enterprise Edition。即使是当前你不确定是否要采购商业版的许可，GitLab 也推荐优先使用GitLab Enterprise Edition。当然也可以直接使用GitLab Community Edition，也就是社区版。

关于GitLab企业版，费用是按人、按时间、按等级定价，按年付费。部署方式，可以选择采购 saas 服务，也可以是部署在私有云或公有云。

## 许可模式

GitLab 基于开源模式构建，有2个版本对外发布: 社区版（Community Edition） 和企业版 （Enterprise Edition）.

GitLab 社区版基于 MIT Expat license开源，而GitLab 企业版基于社区版构建，使用相同的内核，但增加了一些特性和功能，而这些是需要商业授权的。

对于这两个版本：所有 JavaScript 源码都是开源的，且都是基于MIT license编写的。

## 为什么官方要推荐企业版？

天下没有免费的午餐。要真正使用企业版，需要订阅许可。否则，仅能使用基于 MIT 许可的功能。也就是说，如果你安装了企业版，但是并没有购买商业授权，你不会觉察到其和普通社区版有什么差别。但这样也会有一些潜在好处：

* 如果未来某天希望试用企业版的特性，这时就不用重新安装设置实例。仅需要启动试用模块。如果使用后不满意，试用到期（30天）后会自动回到社区版。
* 如果确实需要升级到企业版，而之前安装的却是社区版，则需要升级维护，存在停机时间。如果部署的本来就是企业版，此时仅需简单配置即可。

更多参考：<https://docs.gitlab.com/ee/user/admin_area/license.html#uploading-your-license>

## 什么情况下选择社区版？

如果你只想下载开源软件，那么社区版就是最好的选择。这个发行版没有包含商业代码。功能和企业版相似，但不需要商业许可。代价是如果未来切换到企业版，需要一些停机时间和迁移成本。

## 个人建议

* 对于初创企业，没有相关技术积累，且有市场时间压力，建议优先考虑采购企业版，让专业人的做专业的事，自己专心做最有价值的核心业务。
* 对于有中型企业，有技术储备，可以尝试自建为主，零星采购商业版。
* 对于大型企业，建议采购商业版，获得体系化的设计支持。自有储备能支持，但不一定是最合理的部署，供应商会有更全球的视野和最佳实践。

## 扩展阅读：The MIT License (the MIT Expat License specifically)

 The MIT License requires that the license itself is included with all copies of the source. It is a permissive (non-copyleft) license as defined by the Open Source Initiative.
 <http://choosealicense.com/licenses/mit/>
