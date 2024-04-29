#include<iostream> 
using namespace std;
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	if (a>b){
		if(a>c)
			cout<<a;
		else
			cout<<c;
	}else {
		if(b>c)
		    cout<<b;
		if(c>b)
			cout<<c;
	}
	return 0;
}
