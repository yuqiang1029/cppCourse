#include<iostream>
using namespace std;
int main() {
	float a,b,c,d,v2,v1;
	cout<<"Hallow World"<<endl;
	cout<<"***************************************"<<endl;
	cout<<""<<endl;
	cout<<"      游戏"<<endl;
	cout<<""<<endl;
	cout<<"***************************************"<<endl;
	cout<<"请输入数字! 输入数字："<<endl;
	cin>>a>>b;
	if(a>b) {
		v1=a;
		v2=b;
	} else {
		v1=b;
		v2=a;
	}
	while(1) {
	cout<<"请输入数字，负数代表结束！输入数字："<<endl;
		cin>>c;
		if(c<0) {
			break;
		}
		if(v2>c) {

		} else if(v1<c) {
			v2=v1;
			v1=c;
		} else {
			v2=c;
		}
		cout<<endl;
		cout<<"1st:"<<v1<<endl;
		cout<<endl;
		cout<<"2nd:"<<v2<<endl;
		cout<<endl;
		cout<<"最大的两个数之和："<<v1+v2<<endl;
		cout<<endl; 
	}
	cout<<"total:"<<v1+v2<<endl;
	return 0;
}
