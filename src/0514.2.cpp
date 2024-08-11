/*
 * @Author: zjc acezjc@gmail.com
 * @Date: 2024-06-03 20:34:39
 * @LastEditors: zjc acezjc@gmail.com
 * @LastEditTime: 2024-06-03 21:04:09
 * @FilePath: /cppCourse/src/0514.2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE

编程实现简单计算器功能，
支持+-* /四种运算。在一行输入3个参数，
第1、2个参数为整数 ，第3个参数为操作符(+-* /
在一行输出一个整数为运算结果。如果除数为0，则输出“除数不能为0!”
如果输入无效的操作符(不是+-* /)，则输出“请输入有效运算符’
*/

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char c;
    cout<<"在一行输入3个参数， 第1、2个参数为整数 ，第3个参数为操作符(+-*/)。"<<endl;
    cin >> a >> b >> c;
    if (c == '+')
    {
        cout << a + b << endl;
    }
    else if (c == '-')
    {
        cout << a - b << endl;
    }
    else if (c == '*')
    {
        cout << a * b << endl;
    }
    else if (c == '/')
    {
        if (b == 0)
        {
            cout << "除数不能为0!"<<endl;
            return 1;
        }
        cout << a / b << endl;
    }
    else
    {
        cout << "请输入有效运算符!" << endl;
    }
    return 0;
}