//hhxx
//swap
#include <iostream>
using namespace std;
int main() {
	char s[10];
	int hhxx[4];

	cout<<"&s:"<<&s<<endl;
	s[0]='A';
	cout<<"s 0:"<<s[0]<<endl;
	cout<<"s:"<<s<<endl;
	for(int i=0; i<10; ++i) {
		cout<<"s[i]:"<<s[i]<<endl;
	}
	for(int i=0; i<10; ++i) {
		s[i]='A';


		cout<<"SET &s[i]:"<<&(s[i])<<"="<<s[i]<<endl;
	}
	for(int j=0; j<10; ++j) {
		hhxx[j]=j;
	}

	cout<<"s:"<<s<<endl;
	cout<<"&s:"<<&s<<endl;
	for(int i=0; i<10; ++i) {
		cout<<"s["<<i<<"]:"<<s[i]<<endl;
	}
	for(int j=0; j<4; ++j) {
//		hhxx[j]=j;
		cout<<"hhxx j:"<<hhxx[j]<<endl;
	}



	return 0;
}