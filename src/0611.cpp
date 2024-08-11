/*
 * @Author: zyq 3755780869@qq.com
 * @Date: 2024-06-18 21:09:21
 * @LastEditors: zyq 3755780869@qq.com
 * @LastEditTime: 2024-06-19 20:11:39
 * @FilePath: /cppCourse/src/0611.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// ## 0611
// 使用continue编程实现，输出1～100之间个位数为6并且不能被3整除的所有数。
#include<iostream> 
using namespace std;
int main(){
    int a=1;
    for(a=1;a<=100;a++){
        if(a%10==6){
            if(a%3!=0){
                cout<<a<<endl;
            }else{
                continue;
            }
        }else{
            continue;
        }
    }
	return 0;
}