[TOC]

# DeepVocal-Mark-Tool
A convenient third party tool for editing the symbols of DeepVocal voice database in the process of making the database
一个便捷的第三方DeepVocal声库原音设定工具
![image](https://user-images.githubusercontent.com/40859406/119842800-9348e080-bf39-11eb-8236-e71dac48f686.png)

DVMT (C)2020-2021 Wu Chang.All rights reserved.
UI设计：[Oxygen Dioxide](https://github.com/oxygen-dioxide "Oxygen Dioxide")
DVMT使用GPLv3许可协议.
声库配布时请注明使用DVMT进行标记.
AuPlot (C)2020-2021 Wu Chang.All rights reserved.
DeepVocal 软件版权归Boxstar所有.
文泉驿微米黑体使用GPLv3许可协议.

## 下载与安装
### Windows

下载[最新的release版本](https://github.com/FangCunWuChang/DeepVocal-Mark-Tool/releases/latest "最新的release版本")中的exe安装程序并安装即可。

### Linux
##### Debian系系统

下载[最新的release版本](https://github.com/FangCunWuChang/DeepVocal-Mark-Tool/releases/latest "最新的release版本")中的deb文件并双击安装或在终端中使用：
```bash
sudo dpkg -i xxxx.deb
```
安装。

##### RedHat系系统

下载[最新的release版本](https://github.com/FangCunWuChang/DeepVocal-Mark-Tool/releases/latest "最新的release版本")中的rpm文件并在终端中使用：
```bash
sudo rpm -ivh xxxx.rpm --replacefiles
```
安装。

若安装时出现了：
```bash
错误：依赖检测失败：
	mesa-libGL-devel 被 dvmt-3.0.1b-1.el8.x86_64 需要
	mesa-libGLU-devel 被 dvmt-3.0.1b-1.el8.x86_64 需要
```
的错误，则在联网后执行：
```bash
sudo yum install mesa-libGL-devel
sudo yum install mesa-libGLU-devel
```
成功后再进行安装。
- 注意：RedHat系系统必须使用终端进行安装！双击安装会导致安装失败！

### MacOS

下载[最新的release版本](https://github.com/FangCunWuChang/DeepVocal-Mark-Tool/releases/latest "最新的release版本")中的dmg镜像并双击挂载后即可在dvmt中运行。MacOS版本的DVMT无需安装。

## 卸载
### Windows

双击运行安装目录下的`unins000.exe`或在设置->应用->应用和功能或控制面板->程序->卸载程序中卸载。

### Linux
##### Debian系系统

在终端中执行：
```bash
sudo dpkg -r dvmt
```
进行卸载。

##### RedHat系系统

在终端中执行：
```bash
sudo yum remove dvmt
```
进行卸载。

### MacOS

MacOS系统无需卸载，推出dmg挂载的磁盘后删除文件即可。

## 相关链接
[DeepVocal官方网站](https://www.deep-vocal.com/#/ "DeepVocal官方网站")
[Oxygen Dioxide的Github主页](https://github.com/oxygen-dioxide "Oxygen Dioxide的Github主页")
