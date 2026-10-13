//main.cpp
#include <iostream> //<>符号为优先从内部库搜索
#include "UI_widgets.h" //""符号为优先从外部库搜索
using namespace std;

int main()
{
    //测试清屏
    clearScreen();//用特殊的转义字符清空屏幕
    
    //测试打字机效果
    typeWriter("欢迎来到文字冒险游戏！\n");//typeWriter("字符",延迟数值)历遍字符串每个字符，一个一个输出，中间加点延迟，就像打字机,数值越大，延迟越大
    typeWriter("这是打字机效果演示~\n",80);

    cout << "\n按回车键继续.......";

    return 0;
}
