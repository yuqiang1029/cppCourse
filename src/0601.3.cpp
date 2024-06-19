/*
 * @Author: zyq 3755780869@qq.com
 * @Date: 2024-06-14 20:20:40
 * @LastEditors: zyq 3755780869@qq.com
 * @LastEditTime: 2024-06-14 20:30:20
 * @FilePath: /cppCourse/src/0601.3.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// ### 3 编程实现加法
// 编程实现加法1+3+5+7+...+101的和
#include<iostream>
using namespace std;
int main() {
    int a,b;
    a=1;
    b=0;
    while(a<=101){
        cout<<a<<endl;
        b+=a;
        a+=2;
    }
    cout<<b<<endl;
	return 0;
}