//guess
#include<iostream>
#include<cstdlib>
#include<ctime>
//#include<random>
using namespace std;
int main() {
	int a;
	srand(static_cast<unsigned>(time(NULL)));
	int r=rand()%100+1;

	while (true) {
		cout<<"����¸�����"<<endl;
		cin>>a;
		if (a>r) {
			cout<<"�´���"<<endl;
		} else if(a==r) {
			cout<<"�¶���"<<endl;
			break;
		} else {
			cout<<"��С��"<<endl;
		}
	}
//	cin>>a;
//	if(a>57) {
//		cout<<"�´���"<<endl;
//	} else {
//		cout<<"��С��"<<endl;
//	}

	return 0;
}
