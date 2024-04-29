#include<iostream>
using namespace std;
int main() {
	double a;
in:
	cin>>a;
	int t=a*1000;

//		cout<<"t="<<t<<endl;
	if (t%100 !=0) {
		cout<<"出错了，请重试！"<<endl;
		goto in;
	}

	if (a<0) {
		cout<<"出错了，请重试！"<<endl;
		goto in;
	}

	if (a>100) {
		cout<<"出错了，请重试！"<<endl;
		goto in;
	}
	if (a<60)
		cout<<"不合格"<<endl;
	if (a>=60)
		cout<<"合格"<<endl;
	return 0;
}
