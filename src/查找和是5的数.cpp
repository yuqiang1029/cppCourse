#include<iostream>
using namespace std;
int main() {
	int a,b,c,d,v2,v1;
	cout<<"Hallow World"<<endl;
	cout<<"***************************************"<<endl;
	cout<<""<<endl;
	cout<<"      游戏"<<endl;
	cout<<""<<endl;
	cout<<"***************************************"<<endl;
	cout<<"请输入数字! 输入数字："<<endl;
	cin>>a>>b>>c>>d;
	
	int g[4];
	g[0]=a;
	g[1]=b;
	g[2]=c;
	g[3]=d;
//	cout<<"g[0]="<<g[0]<<endl;
//	cout<<"g[1]="<<g[1]<<endl;
//	cout<<"g[2]="<<g[2]<<endl;
	int menPai=0;
	while(menPai<=3) {
//		cout<<"menPai="<<menPai<<endl;
//		cout<<"g["<<menPai<<"]="<<g[menPai]<<endl;
		int menPai2=menPai+1;
		while(menPai2<=3){
//			cout<<"menPai2="<<menPai2<<endl;
//			cout<<"g["<<menPai2<<"]="<<g[menPai2]<<endl;
			cout<<"Left: g["<<menPai<<"]="<<g[menPai]<<":Right:g["
			<<menPai2<<"]="<<g[menPai2]<<",sum="<<g[menPai]+g[menPai2]<<endl;
			menPai2++;
		}
		menPai++;
	}
//	if(a>b) {
//		v1=a;
//		v2=b;
//	} else {
//		v1=b;
//		v2=a;
//	}
//	while(1) {
//	cout<<"请输入数字，负数代表结束！输入数字："<<endl;
//		cin>>c;
//		if(c<0) {
//			break;
//		}
//		if(v2>c) {
//
//		} else if(v1<c) {
//			v2=v1;
//			v1=c;
//		} else {
//			v2=c;
//		}
//		cout<<endl;
//		cout<<"1st:"<<v1<<endl;
//		cout<<endl;
//		cout<<"2nd:"<<v2<<endl;
//		cout<<endl;
//	}
//	cout<<"total:"<<v1+v2<<endl;
	return 0;
}
