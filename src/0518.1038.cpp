/*
 * @Author: zjc acezjc@gmail.com
 * @Date: 2024-06-06 20:19:00
 * @LastEditors: zjc acezjc@gmail.com
 * @LastEditTime: 2024-06-06 20:30:00
 * @FilePath: /cppCourse/src/0518.1038.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
///### 1038 苹果和虫子
//#### 题目描述
///你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。//
//虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？
//#### 输入
//输入只有一行，包括n，x和以（均为整数）
//#### 输出
//也只有一行，剩下的苹果个数
//#### 输入样例
//10 4 9
//#### 输出样例
//7
#include<iostream>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    if(y%x==0){
        cout<<n-(y/x)<<endl;
    }else{
        cout<<n-(y/x+1)<<endl;
    }
    return 0;
}