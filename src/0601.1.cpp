/*
 * @Author: zyq 3755780869@qq.com
 * @Date: 2024-06-12 20:39:55
 * @LastEditors: zyq 3755780869@qq.com
 * @LastEditTime: 2024-06-12 20:51:48
 * @FilePath: /cppCourse/src/0601.1.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// ## 0601
// ### 1 三目运算符
// #### 利用三目运算符将m~n之间含（m,n）遇到能被7整除的数输出”过“；否则输出该数字
// #### 样例输入
// 1  10;
// #### 样例输出
// 1 2 3 4 5 6 过 8 9 10
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;
    c = a;
    while (c <= b)
    {
        if (c % 7 == 0)
        {
            cout << "过 ";
        }
        else
        {
            cout << c << " ";
        }
        c++;
    }
    cout << endl;
    return 0;
}