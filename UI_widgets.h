//UI_widgets.h
//控制台UI组件库
#ifndef UI_WIDGETS_H
#define UI_WIDGETS_H

#include <iostream>
#include <string>
#include <vector>
#include <thread>//用于延时
#include <chrono>//用于时间

//=================================
//工具函数1.清屏
//=================================

void clearScreen()
{
    //用ANSI转义序列清屏，大部分终端都支持
    std::cout << "\033[2J\033[H";
}

//==================================
//工具函数2：打字机效果
//==================================
//参数：text 要显示的文字
//      speed 每个字的间隔（毫秒），默认30毫秒

void typeWriter(const std::string& text,int speed = 30)
{
    for (char c : text)
    {
        std::cout << c << std::flush;  //立即输出，不缓冲
        std::this_thread::sleep_for(std::chrono::milliseconds(speed));
    }
}

//==============================
//弹窗宽度
//==============================
const int BOX_WIDTH = 40;


#endif //UI_WIDGETS_H