/*
 * @Author: zyq 3755780869@qq.com
 * @Date: 2024-06-16 20:57:56
 * @LastEditors: zyq 3755780869@qq.com
 * @LastEditTime: 2024-06-18 21:23:15
 * @FilePath: /cppCourse/src/0604.2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// ### 假设某银行的年利率是3.5%，在银行存入10万元，一年后本金和利息一共是10.35万元，
// 两年后是10.7123万元，问10年后本金和利息一共多少元？
#include<iostream>
using namespace std;
int main() {
    float a;
    a=10;
    // int b;
    // b=0;
    for(int b=0;b<10;b++){
        cout<<b<<":"<<a<<endl;
        a+=a/100*3.5;
    }
    cout<<a<<endl;
	return 0;
}