# Super knob

## 介绍
Super knob 是基于ESP32与无刷电机实现的超级旋钮，该项目基于国外开源项目：[smartknob](https://github.com/scottbez1/smartknob)

我将无刷电机的旋钮部分解耦出来，通过磁吸的方式搭配不同的底座，来实现各种应用场景，同时设计了一套协议用于旋钮与底座的交互，可实现针对不同场景带来不同的触感体验，甚至可以在同一个场景的不同操作下模拟不同的触感和阻尼反馈。类似于智能手机中线性马达对于不同应用或页面的机械触感模拟。

同时磁吸的灵感来源于大疆的Action2 方块相机，啪，即可将旋钮与不同外设进行磁吸配对，待开发稳定后，计划用CNC加工金属的外壳，来配合磁吸达到最舒服的体验。

例如：当同一个旋钮组件，磁吸到物联网中控的底座上面，自动弹出对应的UI界面，同时可以控制智能家具，且在控制台灯亮度和空调温度的时候，会带来不同的旋钮触感反馈。

例如：当同一个旋钮组件，磁吸到PC旋钮底座上面，即可变身为PC的超级旋钮，可以用他做翻页、快捷键、切换应用、调节音量和亮度，只要你喜欢，都可以分别为这几个功能配置不同的阻尼反馈。

将旋钮部分解耦开来，搭配不同的底座，即可实现控制万物，且触感与阻尼感各不相同，这是普通的机械旋钮不能带来的！

## 目录结构

1.Firmware   固件代码 平台为platformIO

2.Hardware  硬件PCB相关文件

3.Model  三维模型文件，软件为SolidWorks

4.Super Knob Submodules 超级旋钮底座子模块，或许会增加更多

Docs 图片资源

Tools 字库等工具

## 设计草图

![my_plan_pic](Docs/images/my_plan_pic.jpg)

## 功能架构

![my_plan_pic](Docs/images/super_knod_xmind.png)

## UI界面演示

![ui_1](Docs/images/ui_3.png)

## 3D模型（初版）

![ui_1](Docs/images/3Dmodule.jpg)

改进版本：

![ui_1](Docs/images/3D_all.png)

兼容2804电机：

![ui_1](Docs/images/adapter_2894.jpg)



# Super knob Lite

![ui_1](Docs/images/super_knob_lite.png)

## 介绍

Super knob Lite 是基于Super knob的版本进行了优化缩小的 迷你版本，整体外观是参考稚晖君键盘左侧拓展模块设计而来，当天看到稚晖君发布视频后，我拿起游标卡尺和电机就开始了设计，几个小时完成并连夜画PCB验证，并且一次打样通过！致敬偶像，一直激励着我们学习新的东西。

固件代码请切换至 develop/super_knob_lite分支 我还在持续优化ing

`git fetch`

`git pull`

`git checkout  develop/super_knob_lite`



## 电机选型

该项目已适配2804电机，能正常买到，目前看来供货充足，同时也需要配一个径向磁铁

![ui_1](Docs/images/motor_2804.png)

淘宝链接：[链接地址](https://item.taobao.com/item.htm?spm=a1z09.2.0.0.10d92e8d2bksqC&id=656316178382&_u=22es8v8793db)

关于左侧的按键，其实是通过ESP32的TouchGPIO来实现的，从PCB引出GPIO贯穿电机到达左侧，手指触摸即可得到相应反馈，同时电机也会模拟震动，来达到机械按键的效果。

## 视频演示：

https://www.bilibili.com/video/BV1GG4y1q7WF/?vd_source=6a397c40e66fef690edfedae0d01d982

# 鸣谢

https://github.com/peng-zhihui/HelloWord-Keyboard

https://github.com/scottbez1/smartknob

https://github.com/ToanTech/Deng-s-foc-controller 