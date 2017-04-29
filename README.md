# QPatch

Android 基于 ``bsdiff`` 的补丁合并方案

## bsdiff and bspatch

``bsdiff`` 和 ``bspatch`` 是一个创建和应用补丁到二进制文件的工具。

``bsdiff``：用于拆分
``bapatch``：用于合并

Ubuntu：

```bash
sudo apt-get install bsdiff
sudo apt-get install bspatch
```

Mac：

```bash
brew install bsdiff
brew install bspatch
```

## PC 端生成补丁

### 补丁生成

```bash
$ bsdiff oldFile newFile patchFile
```

### 补丁合成

```bash
$ bspatch oldFile newFile patchFile
```

## 使用 QPatch 在 Android 端合成补丁

```java
QPatch.patch(oldFile, newFile, patchFile);
```

## 相关源码

* [bsdiff](http://www.daemonology.net/bsdiff/)
* [bzip2](http://www.bzip.org/downloads.html)
