//swap
#include <iostream>
using namespace std;
int main() {
	int a=1;
	int b=2;
//	int c=0;
	b=a+b; // a(a) b(a+b)
	a=b-a; // a(b) b(a+b)
	b=b-a; // a(b) b(a)
	
	cout<< "a="<<a<<endl;
	cout<< "b="<<b<<endl;
	
	b=a-b;//a(a) b(a-b)
	a=a-b;//a(b) b(a-b)
	b=b+a;//a(b) b(a)
	cout<< "a="<<a<<endl;
	cout<< "b="<<b<<endl;
	
	return 0;
}