/*
 * @Author: zyq 3755780869@qq.com
 * @Date: 2024-06-13 21:13:57
 * @LastEditors: zyq 3755780869@qq.com
 * @LastEditTime: 2024-06-14 20:19:50
 * @FilePath: /cppCourse/src/0601.2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// ### 2 计算平均年龄
// 班上有学生若干名，给出每名学生的年龄(整数)，求班上所有学生的平均年龄，保留到小数点后两位。
// #### 输入
// 第一行有一个整数n(1 <n< 100)，表示学生的人数。其后几行每行有1个整数，表示每个学生的年龄，取值为15到25

// #### 输出
// 输出一行，该行包含一个浮点数，为要求的平均年龄，保留到小数点后两位。
// #### 输入样例
// 2
// 18
// 17
// #### 输出样例
// 17.5
#include<iostream>
using namespace std;
int main() {
    cout<<"第一行有一个整数n(1 <n< 100),表示学生的人数。其后几行每行有1个整数,表示每个学生的年龄,取值为15到25"<<endl;
    float n,a,b;
    b=0;
    int c=0;
    cin>>n;
    if(n<1||n>100){
    cout<<"一个班上学生不准确！"<<endl;
    return 1;
    }
    while (c<n)
    {
        cout<<"input age:";
        cin>>a;
        if(a<15||a>25){
        cout<<"年龄不准确！"<<endl;
        return 1;
    }
        b+=a;
        ++c;
    }
    
    cout<<b/n<<endl;
	return 0;
}