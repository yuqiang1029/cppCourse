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
		cout<<"请你猜个数："<<endl;
		cin>>a;
		if (a>r) {
			cout<<"猜大了"<<endl;
		} else if(a==r) {
			cout<<"猜对了"<<endl;
			break;
		} else {
			cout<<"猜小了"<<endl;
		}
	}
//	cin>>a;
//	if(a>57) {
//		cout<<"猜大了"<<endl;
//	} else {
//		cout<<"猜小了"<<endl;
//	}

	return 0;
}
