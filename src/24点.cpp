#include<iostream> 
#include<stdio.h>
//#include<>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>13 | b>13 | c>13 | d>13){
		cout<<"�����"<<endl; 
	}
	
	if(a*b==24){
		cout<<"a*b="<<a*b;
		
	}else if(a+b==24){
		cout<<"a+b="<<a+b;
	}else{
		cout<<"�ղ���"<<endl; 
	}
	return 0;
}
