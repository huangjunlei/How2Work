# 如何基于 Markdown 编写技术文档

## 需求

## 工具链

* OS：Darwin Kernel Version 18.2.0
* IDE：Visual Studio Code
* Visual Studio Code扩展插件：
  * markdownlint：在写书中如有违规，会在编辑区提示你。
  * Markdown PDF：将 md 文件转换为 pdf、html、jgp 等，便于非技术人员阅读。
  * Preview：预览最终效果。

## 基本元素

### 标题

用“#”来标记标题，每增加一级增加一个 # ，字号也会减小。# 和文字之间留一个空格。

```markdown
# 一级标题
## 二级标题
### 三级标题
#### 四级标题
##### 五级标题
###### 六级标题
```

### 列表

在文字前面加上 - 或 数字 1. 2. 3. 等即可显示列表

```markdown
- 文本1
- 文本2
- 文本3
```

- 文本1
- 文本2
- 文本3

```markdown
1. 文本1
2. 文本2
3. 文本3
```

1. 文本1
2. 文本2
3. 文本3

### 表格


### 代码

```bash
#!/bin/bash
echo Hello world
```

### 链接

*效果

[a link](http://www.example.com/)

*语法

```markdown
[a link](http://www.example.com/)
```

### 图片

与链接类似，使用 `![](图片链接地址)` 来展示图片。

- 网络图片
  - `![网络图片](https://commonmark.org/images/markdown-mark.png)`
  - ![网络图片](https://commonmark.org/images/markdown-mark.png)
- 本地图片
  - `![本地图片](markdown-mark.png)`
  - ![本地图片](markdown-mark.png)

## 生成外发文档

## 常用Tips

### 获得目录的树形展示

Mac默认没有 tree 命令，又不想安装其他工具，可以通过下面的命令来救急。

```bash
find . -print | sed -e 's;[^/]*/;|____;g;s;____|; |;g'
```