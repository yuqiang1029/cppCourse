#include<iostream>
using namespace std;
int main() {
	int b=1;
	b=b+1;
	cout<<b<<endl;
	cout<<endl;
	
	int c=3,d=4;
	int x=c;
	c=d;
	d=x;
	cout<<"c="<<c<<endl;
	cout<<"d="<<d<<endl;
	cout<<endl;
	cout<<endl;
	{
		int c=9,d=123;

		c= c+d;
		d= c-d;
		c= c-d;
		cout<<"c="<<c<<endl;
		cout<<"d="<<d<<endl;
	}

	return 0;
}
