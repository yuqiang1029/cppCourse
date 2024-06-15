// -*- coding: utf-8 -*-
//插入排序

#include<iostream>
using namespace std;
int main() {
	float v1=999999;
	float v2=999999;
	float v3=999999;
	float v4=999999;
	float v5=999999;
	float c;
	while(c>=0) {
		cout<<"please inter number (negative means exit,999999=0):"<<endl;
		cin>>c;
		cout<<"input:"<<c<<endl;
		cout<<"dbg : c: "<<c <<", v1~5:" <<v1<<"," <<v2<<"," <<v3<<"," <<v4<<"," <<v5 <<endl;
		if(c<v1) {
			cout<<"dbg : c<v1 "<<endl;
			v5=v4;
			v4=v3;
			v3=v2;
			v2=v1;
			v1=c;
		} else if (c<v2) {
			cout<<"dbg : c<v2 "<<endl;
			v5=v4;
			v4=v3;
			v3=v2;
			v2=c;
		} else if (c<v3) {
			cout<<"dbg : c<v3 "<<endl;

			v5=v4;
			v4=v3;
			v3=c;
		} else if (c<v4) {
			cout<<"dbg : c<v4 "<<endl;

			v5=v4;
			v4=c;
		} else if (c<v5) {
			cout<<"dbg : c<v5 "<<endl;

			v5=c;
		}
		cout<<"dbg after : c: "<<c <<", v1~5:" <<v1<<"," <<v2<<"," <<v3<<"," <<v4<<"," <<v5 <<endl;

	}
	return 0;
}
