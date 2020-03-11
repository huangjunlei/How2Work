# 面向企业市场的Apple开发者的工作流程

本文旨在介绍面向企业应用市场的苹果开发者的工作流程，包括研发过程、发布过程等。

## 1. 苹果生态提供的5种发布选择

<https://developer.apple.com/programs/whats-included/>

### （1）App Store 苹果应用商店

苹果应用商店是大家最熟悉的选择，它的特点是面向公众开放，适合B2C、C2C 等，也可以作为企业内部应用的发布选择，但会导致下载者的范围超过预期，诱发一些不必要的隐患。
> The App Store makes it simple for users to discover, purchase, and download your apps for iPhone, iPad, Mac, Apple Watch, and Apple TV.
>
> * You get 70% of sales revenue. 85% for qualifying subscriptions.
> * No hosting fees.
> * Apple handles worldwide payment processing.

### (2) Apple Business Manager and Apple School Manager 苹果商业管理商与教育管理商

苹果针对企业市场和教育行业的特点，专门推出的一种分发模式，能控制受众、控制价格等因素。

> * Offer apps in volume for businesses or educational institutions.
> * Choose to provide a discount for educational institutions.
> * **Privately** offer custom apps you’ve made for specific businesses.
> * You’ll maintain the code and retain your intellectual property rights.
> * Businesses can also **privately** distribute their proprietary apps to their **employees**.

### （3）Ad Hoc Distribution 临时发布

主要用于产品内测阶段的场景，邀请有限的客户参与到测试中。

> A limited number of users can install your app directly on their Apple devices for testing.
> 
> * iPhone (100 per membership year)
> * iPad (100 per membership year)
> * iPod touch (100 per membership year)
> * Apple Watch (100 per membership year)
> * Apple TV (100 per membership year)

### （4）Developer ID for macOS 专门针对 Mac电脑的开发

> You can distribute your Mac applications outside of the Mac App Store by using Developer ID. Signing your Mac applications, plug-ins, and installer packages with a Developer ID certificate lets Gatekeeper verify that apps are not created by malware developers and haven’t been tampered with since they were signed.

### （5）Safari Extensions 专门针对 Safari 扩展的开发

> Enhance and customize the browsing experience with Safari Extensions, and distribute them on the App Store or get them notarized for distribution outside the Mac App Store.

## 2. 开发者计划

<https://developer.apple.com/programs/how-it-works/>

### 2.1 Getting Started 起航

> If you’re new to development on Apple Platforms, you can get started with our tools and resources for free. If you’re ready to build more advanced capabilities and distribute your apps on the App Store, enroll in the Apple Developer Program. The cost is 99 USD per membership year.

两种模式可选，个人开发者或者机构开发者

> * Enrolling as an Individual：If you are an individual or sole proprietor/single person business, get started by signing in with your Apple ID with two-factor authentication turned on. You’ll need to provide basic personal information, including your legal name and address.
> * Enrolling as an Organization：If you’re enrolling your organization, you’ll need an Apple ID with two-factor authentication turned on, as well as the following to get started:

#### 机构开发者的特殊要求

##### A D-U-N-S® Number 邓白氏编码

> Your organization must have a D-U-N-S Number so that we can verify your organization’s identity and legal entity status. These unique nine-digit numbers are assigned by Dun & Bradstreet and are widely used as standard business identifiers. You can check to see if your organization already has a D-U-N-S Number and request one if necessary. They are free in most jurisdictions. 

由商业信息及风险管理机构华夏邓白氏提供，以邓白氏编码®（D-U-N-S® Number）作为企业身份识别的基础，通过审核，评估及多维度跨平台展示企业资质及供应链能力，帮助企业提升品牌影响力赢取并稳固与上游采购企业的合作关系。

更多参考 <https://developer.apple.com/support/D-U-N-S/>

##### Legal Entity Status 合法的组织主体

> Your organization must be a legal entity so that it can enter into contracts with Apple. We do not accept DBAs, fictitious businesses, trade names, or branches.

##### Legal Binding Authority 授权个人作为组织代表

> As the person enrolling your organization in the Apple Developer Program, you must have the legal authority to bind your organization to legal agreements. You must be the organization’s owner/founder, executive team member, senior project lead, or have legal authority granted to you by a senior employee.

##### A Website 有官网

> Your organization’s website must be publicly available and the domain name must be associated with your organization.

### 2.2 Managing Your Account 开发者账号管理

> As a member, you have full access to the resources you need to configure app services and to submit new apps and updates. If you’ve enrolled as an organization, you can invite additional developers to your team within your account.

### 2.3 Building Your Apps 构建应用

> Take advantage of a comprehensive set of frameworks you can implement in your app to support advanced app capabilities and services on iOS, macOS, watchOS, and tvOS.

### 2.4 Distributing Your Apps 发布应用

The App Store for iPhone, iPad, Mac, Apple Watch, and Apple TV gives you the opportunity to deliver your apps to over a billion customers around the world. And with Apple Business Manager, you can meet the unique needs of businesses by privately offering apps you’ve customized just for them. Businesses can also privately distribute their proprietary apps to their employees.

#### 2.4.1 将自定 App 部署到 iPhone 和 iPad

<https://support.apple.com/zh-cn/guide/deployment-reference-ios/apd29c0f45f1/web>
> 自定 App 是指您或第三方开发者开发的用于满足组织的特定商务需求的 iPhone、iPad、iPod touch 或 Apple TV App。它们通过“Apple 商务管理”以安全且保密的方式分发给组织成员。您的开发者通过 App Store Connect 提交自定 App，并将 App 分配到您的“Apple 商务管理”帐户。一经批准，它们就对您的组织变为可用，这样就只有您可以查看和访问它们。自定 App 可让您享有 App Store 的规模和易用性，同时还提供：
>
> * 针对敏感或私密公司数据的安全性功能
> * 定制外观和体验，如您的公司标志或品牌化
> * 针对组织内部员工的独特功能
> * 针对业务处理或工作流程的特定功能
> * 针对伙伴、客户、经销商或特许经营者的自定功能
> * 针对 IT 环境的特殊配置

##### 2.4.2 有关自定 App 的重要信息

> * App 审核：提交进行自定分发的每个自定 App 和每个更新版本都要经过 Apple 的 App 审核过程。App Store App 的 App 审核指南同样适用于自定 App。审核过程通常需要 1–2 天。有关 App 审核过程的更多信息，请参阅 App 审核网站。
> * App 安全性：如果您的 App 中包含敏感商业数据，您应该在 App 内添加一个认证机制。Apple 强烈建议使用 App 内认证和加密最佳实践。有关 iPhone、iPad、iPod touch 或 Apple TV 安全编码最佳实践的更多信息，请参阅 Apple 开发者网站上的安全性框架。
> * App 验证：若要验证自定 App 是否满足审核指南，Apple 需要登录并操作 App。与您的开发者或商业伙伴一同决定如何适当处理私人或敏感商业数据，从而满足此要求。您应该为 App 审核目的提供通用测试帐户或经过清理的样本数据，以保护机密。
> * 分发：自定 App 以私人方式在“Apple 商务管理”的“App 和图书”部分内分发。IT 团队可以使用与 App Store App 相同的 App 分发模型，包括基于设备的分配和被管理的 App 功能。开发者指定允许访问 App 的组织，并可以私人方式分发给特定组织。如果您支持的用户基础遍布全球，通过 App Store Connect 提交 App 时将其标记为全球可用十分重要。

## 3.Distributing Custom Apps for Business 发布企业定制应用

<https://developer.apple.com/business/custom-apps/>

核心是私有与安全，受众聚焦在特定伙伴、雇员、经销商等。

> Engage with business customers to design and build customized apps that meet the unique needs of their organization. With Apple Business Manager, you can **privately** and **securely** distribute to specific **partners**, **clients**, **franchisees**. And now you can also distribute proprietary apps to your internal employees.

### 3.1 How it Works 工作原理

> Businesses that you identify in App Store Connect will see your app and be able to purchase it in the Apps and Books section of Apple Business Manager. You can offer custom apps for free or at any price tier you choose. Identify the businesses who can download your app and set a release date in App Store Connect. They will be able to find your app on Apple Business Manager once it’s published.

### 3.2 App Store Connect

分发管理工具

> App Store Connect lets you distribute your app privately in up to 69 countries and regions. Upload your app for review and select the Custom App Distribution option. If your app contains sensitive data, provide sample data and authentication for our review team. Make sure your tax and banking information is set up so that Apple can process payments for you. You’ll also be able to invite testers to beta test your app before distribution.

#### 3.2.1 向企业或教育机构分发您的 App

 <https://help.apple.com/app-store-connect/#/dev275598f16>

App Store 中的所有 App 默认可在“Apple 商务管理”和“Apple 校园教务管理”中以原价批量购买，以供企业和教育机构下载 App 并批量分发。您可以以优惠价格向教育机构提供您的 App，或指定可下载您 App 的特定企业。您也可以在您的组织中分发专有 App 以供内部使用。仅当您的 App 尚未通过审核时，此选项才可用。“Apple 商务管理”和“Apple 校园教务管理”在许多国家和地区都可供使用。

##### 仅向指定企业或组织提供 App

> 您可以指定一个或多个组织，允许其在“Apple 商务管理”或“Apple 校园教务管理”中查看和下载 App。这些指定组织便可通过“移动设备管理（MDM）”或兑换码分发 App。请注意，此选项仅在您的 App 获得批准前可用。如果仅向指定企业提供 App，无论您的 App 是否免费，您都需要先访问 App Store Connect 并签署《付费应用程序协议》。
>
> * 在 App Store Connect 首页，点按“我的 App”并从列表中选择您的 App。
> * 在“价格与销售范围”下，前往设置分发选项的部分。
> * 选择“可在 Apple 商务管理中非公开地分发给特定企业”。
> 
>请在“类型”下选择“组织 ID”或“Apple ID”并输入必填信息。输入“组织 ID”后，您的 App 会显示在该组织的“Apple 商务管理”或“Apple 校园教务管理”帐户中。对于仍在使用旧版“批量购买计划”的企业，您可以将 App 分配至该企业用于批量购买的 Apple ID。

### 3.3 Apple Business Manager 商务管理

<https://support.apple.com/zh-cn/guide/apple-business-manager/welcome/web>

“Apple 商务管理”是一个基于 Web 的简单门户，IT 管理员可以用它来一站式部署 iPhone、iPad、iPod touch、Apple TV和 Mac 电脑。当与移动设备管理 (MDM) 解决方案搭配使用时，您可配置设备设置，还可购买和分发 App 和图书。而且，Apple 商务管理使用联合验证与 Microsoft Azure Active Directory (AD) 集成在一起，因此您可以使用管理式 Apple ID 快速创建员工帐户。专门面对企业场景的工具，如实现自动设备级部署，也可以提供特定的授权码限制已授权的用户从 App Store 中下载。

> Organizations can enroll as an Apple Business to purchase and distribute content and **automate device deployment** using Apple Business Manager. The organizations that you identify can see your app and purchase it in the Content section of Apple Business Manager and seamlessly distribute it through Mobile Device Management. Alternatively, organizations can choose to provide redemption codes to authorized users to download the app on the App Store.

### 3.4 关于 Mac 上的 Apple Configurator 介绍

<https://support.apple.com/zh-cn/guide/apple-configurator-2/cadf1802aed/mac>

> **配置大量设备**:
Apple Configurator 2 采用灵活、以设备为中心的设计，可让您快速、轻松地配置一部或多部通过 USB 连接到 Mac 的 iPhone、iPad、Apple TV 和 iPod touch 设备。只需单独选择一部设备，或同时选择多部设备，然后执行操作。使用 Apple Configurator 2，您可以更新软件、安装 App 和配置描述文件、重新命名和更改设备上的墙纸、导出设备信息和文稿以及执行其他操作。
Apple Configurator 2 还包括可显示设备信息的窗口，如 iOS 版本、iPadOS 版本、序列号、硬件 ID 和地址、可用容量以及设备的控制台日志等信息。

> **自定或自动化您的设备配置**:
Apple Configurator 2 实现了 MDM 注册的自动化，可无缝分发来自 App Store 的 App。这一操作通过整合“Apple 校园教务管理”和“Apple 商务管理”来实现。“准备助理”便于针对课堂环境监督和配置多部 iPad，或在 MDM 解决方案中快速注册大量设备以供持续管理。内建的配置描述文件编辑器支持创建和编辑带有最新 iOS、iPadOS 和 Apple TV 设置的描述文件。

## 4.TestFlight Beta 版测试概述（iOS、Apple TVOS、watchOS）

<https://help.apple.com/app-store-connect/#/devdc42b26b8>