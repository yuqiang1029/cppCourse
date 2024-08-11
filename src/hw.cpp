#include <iostream>
using namespace std;
int main() {
	cout <<"Hello"<<endl;
	cout<<100<<endl;

	cout<<(1+2)*3*4*5*189+
	    23456.7890*123456.666666666<<endl;
	cout<<"1+2*3"<<endl;
	cout<<3*(1+2)*4*5-6*3*3<<endl;
	cout<<"3*(1+2)-6="<<3*(1+2)-6<<endl;
	cout<<"3*(1+2)*4*5-6*3*3="<<3*(1+2)
	    *4*5-6*3*3<<endl;
	cout<<"3*(1+2)-10/4="<<3*(1+2)-10/4<<endl;

//	for(int n=1; n<=100; n++) {
//		cout<<n<<endl;
//	}
	int n=1;
p1:
	n++;
	if(n>100 ) {
		goto p2;
	}

	cout<<n<<endl;
	goto p1;

p2:

	cout<<"10/4="<<10/4<<endl;
	
	
	
	
	
	cout<<"3 digits:"<<endl;
	
	int u=34567;
	cout<<u%10<<endl;
	// a u  u/10%10
	cout<<u/10%10<<endl;
	cout<<u/10/10%10<<endl;
	
	int a=4;
	int h=8;
	cout<<a*h*1/2<<endl;
	
	return 0;
}