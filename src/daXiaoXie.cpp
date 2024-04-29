#include<iostream> 
using namespace std;
int main(){
	char x='a';
	cout<<char(x-32)<<endl;
	 x='A';
	cout<<char(x+32)<<endl; 
	x=' ';
	cout<<int(x)<<endl;
	cout<<int(NULL)<<endl;
	return 0;
}
