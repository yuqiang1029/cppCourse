#include<iostream>
using namespace std;
int main() {
	int num=10;
	num=num+1;
	cout<<num<<endl; // 11
	num++;
	cout<<num<<endl; // 11 先用后加
	++num;
	cout<<num<<endl; // 13 先加后用


	return 0;
}
