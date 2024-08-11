/*
 * @Author: zyq 3755780869@qq.com
 * @Date: 2024-06-19 20:13:13
 * @LastEditors: zyq 3755780869@qq.com
 * @LastEditTime: 2024-06-19 21:16:23
 * @FilePath: /cppCourse/src/0615.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// ## 0615
// ### 求出所有的四叶玫瑰花数；思考五位、六位、七位、八位，等玫瑰花数，有没有？
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /*
    int a = 1000, b, c, d, e;

    for (a = 1000; a <= 9999; a++)
    {
        b = a % 10;
        c = a / 10 % 10;
        d = a / 100 % 10;
        e = a / 1000;
        if (a == b * b * b * b + c * c * c * c + d * d * d * d + e * e * e * e)
        {
            cout << a << endl;
        }
    }
    */
    int a = 1000, b, c, d, e, f, g, h, i, j, k, l, m;

    for (a = 1000; a <= 99999999; a++)
    {
        b = a % 10;
        c = a / 10 % 10;
        d = a / 100 % 10;
        e = a / 1000 % 10;
        f = a / 10000 % 10;
        g = a / 100000 % 10;
        h = a / 1000000 % 10;
        i = a / 10000000 % 10;

        // int u=3;
        // cout<<pow(u,4)<<endl;
        if (a == pow(b, 4) + pow(c, 4) + pow(d, 4) + pow(e, 4) 
        + pow(f, 4) + pow(g, 4) + pow(h, 4) + pow(i, 4))
        {
            cout << a << endl;
        }
    }
    return 0;
}