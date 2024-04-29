#include <iostream>
using namespace std;
int main() {
	int z;
	int d;
	int e;
	int f;
//	cin>>a>>b>>c;
	cin>>z;
	d=z%10;
	e=z/10%10;
	f=z/10/10%10;
	
	cout<<f<<endl;
	cout<<e<<endl;
	cout<<d<<endl;
	cout<<"d+e+f="<<d+e+f<<endl;
	
	return 0;
}
