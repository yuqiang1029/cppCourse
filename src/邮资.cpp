#include<iostream>


using namespace std;
int main() {
	int a,fei;
	char b;
	cin>>a>>b;
	fei=0;
	if(b!='y' && b!='n') {
		cout<<"error"<<endl;
		return 1;
	}
	if(a<=1000){
		fei+=8;
	}
	if(a>1000) {
		a-=1000;
		fei+=8;
			cout<<a<<" ";
			cout<<fei<<endl;;
		while(a>500) {
			a-=500;
			fei+=4;
			cout<<a<<" ";
			cout<<fei<<endl;;
		}
		fei+=4;
		cout<<fei<<endl;
	}
	if(b=='y' ){
		fei+=5;
	}else{
	}
	
	cout<<fei<<endl;
	return 0;
}