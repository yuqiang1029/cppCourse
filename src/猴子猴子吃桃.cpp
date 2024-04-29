#include<iostream>
using namespace std;
int main() {
//	int a;
	float a;
in:
	cin>>a;
//	cout<<"a="<<a<<endl;
	if (a>INT_MAX) {
		cout<<"a too large!"<<endl;
		goto in;
		
	}
	a=a+1;
	a=a*2;
	a=a+1;
	a=a*2;
	cout<<a<<endl;
	return 0;
}
