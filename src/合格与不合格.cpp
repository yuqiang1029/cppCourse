#include<iostream>
using namespace std;
int main() {
	double a;
in:
	cin>>a;
	int t=a*1000;

//		cout<<"t="<<t<<endl;
	if (t%100 !=0) {
		cout<<"�����ˣ������ԣ�"<<endl;
		goto in;
	}

	if (a<0) {
		cout<<"�����ˣ������ԣ�"<<endl;
		goto in;
	}

	if (a>100) {
		cout<<"�����ˣ������ԣ�"<<endl;
		goto in;
	}
	if (a<60)
		cout<<"���ϸ�"<<endl;
	if (a>=60)
		cout<<"�ϸ�"<<endl;
	return 0;
}
