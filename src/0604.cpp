/*
 * @Author: zyq 3755780869@qq.com
 * @Date: 2024-06-16 20:44:32
 * @LastEditors: zyq 3755780869@qq.com
 * @LastEditTime: 2024-06-16 20:54:07
 * @FilePath: /cppCourse/src/0604.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// ### 编号1～9的9个盒子里放有不同数量的糖果，已知每个盒子的糖果数量是前一个盒子的2倍。
// 如果1号盒子里放11颗糖果，那么9号盒子里放多少颗糖果？
#include<iostream>
using namespace std;
int main() {
    int a,b;
    a=11;
    b=1;
    while(b<9){
        a*=2;
        b++;
        // cout<<b<<":"<<a<<endl;
    }
    cout<<a<<endl;
    
	return 0;
}