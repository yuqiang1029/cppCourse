//0423 ��ҵ 
#include<iostream> 
using namespace std;
int main(){
	cout<<"��������ˮ������"<<endl;
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
	cout<<"ˮ�ѣ�"<<s<<endl;
	
	
	
	
	return 0;
}
