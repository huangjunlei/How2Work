# SpringCloud的服务重试机制

## 启动SpringCloud重试retry能力

需要先在pom.xml里加入

```xml
<dependency>
<groupId>org.springframework.retry</groupId>
<artifactId>spring-retry</artifactId>
</dependency>
```

## ribbon的能力

https://blog.csdn.net/qq_41907991/article/details/90418729

```bash
ribbon:
  #单位ms,请求连接的超时时间，默认1000
  ConnectTimeout: 500
  #单位ms,读取数据的超时时间，默认1000
  ReadTimeout: 3000
  #对所有操作请求都进行重试
  #设置为true时，会对所有的请求进行重试，若为false只会对get请求进行重试
  #如果是put或post等写操作，
  #如果服务器接口没做幂等性，会产生不好的结果，所以OkToRetryOnAllOperations慎用。
  #默认情况下,GET方式请求无论是连接异常还是读取异常,都会进行重试
  #非GET方式请求,只有连接异常时,才会进行重试
  OkToRetryOnAllOperations: true
  #切换实例的重试次数，默认为1
  MaxAutoRetriesNextServer: 1
  #如果不配置ribbon的重试次数
  #对当前实例的重试次数,默认为0
  MaxAutoRetries: 2
  #为true的时候会关闭懒加载
  #Ribbon进行客户端负载均衡的Client并不是在服务启动的时候就初始化好的，
  #而是在调用的时候才会去创建相应的Client，所以第一次调用的耗时不仅仅包含发送HTTP请求的时间，还包含了创建RibbonClient的时间
  #这样一来如果创建时间速度较慢，同时设置的超时时间又比较短的话，第一次请求很容易超时
  eager-load:
    enabled: true
    #指定需要关闭懒加载的服务名
    clients: eureka-client
```