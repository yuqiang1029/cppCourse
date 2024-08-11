/*
 * @Author: zjc acezjc@gmail.com
 * @Date: 2024-06-06 20:33:29
 * @LastEditors: zjc acezjc@gmail.com
 * @LastEditTime: 2024-06-07 21:13:27
 * @FilePath: /cppCourse/src/0518.1057.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// ### 1057 计算邮资
// #### 题目描述
// 根据邮件的重量和用户是否选择加急计算邮费。
// 计算规则:重量在1000克以内(包括1000克)基本费8元，
// 超过1000克的部分，每500克加收超重费4元，不足500克部分按500克计算;如果用户选择加急，多收5元。
// #### 输入
// 输入一行，包含整数和一个字符，以一个空格分开，分别表示重量(单位为克)和是否加急。
// 如果字符是y，说明选择加急；如果字符是n，说明不加急。
// #### 输出
// 也只有一行，包含一个整数，表示邮费
// #### 输入样例
// 1200 y
// #### 输出样例
// 17
#include <iostream>
using namespace std;
int main()
{

    int a;
    char b;
    cin >> a >> b;
    if (b != 'y' && b != 'n')
    {
        cout << "bu neng shi yong !!" << endl;
        return 1;
    }
    if (a <= 1000)
    {
        cout << 8 << endl;
    }
    else
    {
        int fee = 0;
        a -= 1000;
        fee += 8;

        while (a > 500)
        {
            a -= 500;
            fee += 4;
        }
        fee += 4;
        cout << fee << endl;
    }
    return 0;
}
// int main()
// {
//     int a;
//     char b;
//     cin >> a >> b;
//     if(b!='y'||b!='n'){
//         cout<<"bu neng shi yong !!"<<endl;
//         return 1;
//     }
//     if(a<=1000){
//         if(b=='y'){
//             cout<<8+5<<endl;
//             return 0;
//         }else{
//             cout<<8<<endl;
//             return 0;
//         }
//     }else{
//         while(a){
//             if((a-1000)%500==0){
//                 cout<<(a-1000)/500<<endl;
//                 break;
//             }else{

//             }
//         }
//     }
//     return 0;
// }