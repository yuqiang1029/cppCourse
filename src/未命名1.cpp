#include<iostream> 
using namespace std;
int main(){
	int num=10;
	int a=num++;
	int b=++num;
	cout<<"a="<<a<<endl; //10 
	cout<<"b="<<b<<endl; //12
	cout<<"num="<<num<<endl;//12
	++  ++  num;
	cout<<"num="<<num<<endl;
	
	
	return 0;
}
