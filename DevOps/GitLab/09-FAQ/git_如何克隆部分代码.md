# 如何只克隆部分代码？

## 一、需求

根据整体规划需求，多个模块的源码共存在一个仓库中。在一些场景执行中，需要考虑执行效率，仅关注部分路径的代码。即仅需获取部分路径的文件。

## 二、解决方案

利用Sparse Checkout模式。官方信息描述如下：

### Sparse checkout

>"Sparse checkout" allows to sparsely populate working directory. It uses skip-worktree bit (see git-update-index(1)) to tell Git whether a file on working directory is worth looking at.

>"git read-tree" and other merge-based commands ("git merge", "git checkout"…) can help maintaining skip-worktree bitmap and working directory update. $GIT_DIR/info/sparse-checkout is used to define the skip-worktree reference bitmap. When "git read-tree" needs to update working directory, it will reset skip-worktree bit in index based on this file, which uses the same syntax as .gitignore files. If an entry matches a pattern in this file, skip-worktree will be set on that entry. Otherwise, skip-worktree will be unset.

>Then it compares the new skip-worktree value with the previous one. If skip-worktree turns from unset to set, it will add the corresponding file back. If it turns from set to unset, that file will be removed.

>While $GIT_DIR/info/sparse-checkout is usually used to specify what files are in. You can also specify what files are not in, using negate patterns. 

## 三、基本操作过程

### 1. 准备

```sh
$mkdir code_dir
$cd code_dir
$git init
$git remote add -f origin <url>
```

### 2. 启用sparsecheckout模式

```sh
$git config core.sparsecheckout true
```

### 3. 设置排除的路径

编辑 .git/info/sparse-checkout
```sh
$echo “want_dir/*” >> .git/info/sparse-checkout
```

### 4. 拉取代码

```sh
$git pull origin master
```

## 四、如何设置sparsecheckout文件

### 子目录的匹配

* 如果目录名称前带斜杠，如/docs/，将只匹配项目根目录下的docs目录
* 如果目录名称前不带斜杠，如docs/，其他目录下如果也有这个名称的目录，如test/docs/也能被匹配。
* 如果写了多级目录，如docs/05/，则不管前面是否带有斜杠，都只匹配项目根目录下的目录，如test/docs/05/不能被匹配。

### 通配符 “*“ (星号)

支持通配符 “*“，如可以写成以下格式：

```sh
*docs/
index.*
*.gif
```

### 排除项 “!” (感叹号)

支持排除项 “!”，如只想排除排除项目下的 “docs” 目录，可以按如下格式写：

```sh
/*
!/docs/
```

## 五、如何关闭sparsecheckout模式

1. 将core.sparsecheckout设为false
2. 修改 .git/info/sparse-checkout 文件，用一个”*“号替代其中的内容
3. 执行 checkout 或 read-tree 命令

## 六、注意事项

1. 如果排除是临时性的，要及时清除相关设置，否则就是一个隐患，即导致环境不可重入。
2. 仅限 Git 1.7以上版本

## 参考

<https://blog.csdn.net/u022812849/article/details/53025248>
<http://schacon.github.io/git/git-read-tree.html#_sparse_checkout>
<https://zhgcao.github.io/2016/05/11/git-sparse-checkout/>