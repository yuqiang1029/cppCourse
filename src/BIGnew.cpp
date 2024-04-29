#include<iostream> 
using namespace std;
int main(){
	
	
	int a,b,c;
	cin>>a>>b>>c;
	
	float u=
		(a>b)?(
			(a>c)?
				a:c
			)
			:
			((b>c)?
				b:c);
	cout<<u<<endl;
	return 0;
}
