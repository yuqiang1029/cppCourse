/*
 * @Author: zjc acezjc@gmail.com
 * @Date: 2024-06-11 20:05:12
 * @LastEditors: zjc acezjc@gmail.com
 * @LastEditTime: 2024-06-11 20:10:37
 * @FilePath: /cppCourse/src/0528.2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// ## 0528
// ### 1.利用循环输出10遍我爱C++;
// ### 2.利用循环1~100中所有的偶数；
// ### 3.利用循环输出1~100中所有的奇数； 
#include<iostream>
using namespace std;
int main() {
    int a=1;
    while(a<=100){
        if(a%2==0){
            cout<<a<<endl;
        }
        a++;
    }
	return 0;
}