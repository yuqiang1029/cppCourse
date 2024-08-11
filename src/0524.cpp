/*
 * @Author: zjc acezjc@gmail.com
 * @Date: 2024-06-05 20:20:27
 * @LastEditors: zjc acezjc@gmail.com
 * @LastEditTime: 2024-06-05 20:35:33
 * @FilePath: /cppCourse/src/0524.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//### 1024 保留3位小数的浮点数
//#### 题目描述
//读入一个单精度浮点数，保留3位小数输出这个浮点数
//#### 输入
//只有一行，一个单精度浮点数
//#### 输出
//也只有一行，读入的单精度浮点数
//#### 输入样例
//12.34521
//#### 输出样例
//12.345
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float a;
    cin>>a;
    cout<<fixed<<setprecision(3)<<a<<endl;

    return 0;
}