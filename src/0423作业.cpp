//0423 作业 
#include<iostream> 
using namespace std;
int main(){
	cout<<"请输入用水吨数："<<endl;
	int a;
	cin>>a;
	float s=0;
	if(a<=12) {
		s+=2.5*a;
	} else if (a<=20) {
		s+=2.5*12;
		a-=12;
		s+=3.8*a;
	} else {
		s+=2.5*12;
		s+=3.8*(20-12);
		a-=20;
		s+=4.2*a;
	}
	cout<<"水费："<<s<<endl;
	
	
	
	
	return 0;
}
