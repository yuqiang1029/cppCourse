#include<iostream>
#include<iomanip>
using namespace std;
int main() {
//	int cout=1;
//	printf("%d",cout);
	float pi=3.1415926;
	cout<< setprecision(4)<<pi<<endl;
//	cout<<fixed<<setprecision(3)<<pi<<endl;

	int flag=4;
	cout<<"flag:"<<(flag==9)<<endl;
	cout<<"max:"<<max(3.4,2.0)<<endl; // min
	return 0;
}