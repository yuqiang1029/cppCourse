///////////////////////////////////////////////
//
//	fibonacci with large int support
//
//
//
///////////////////////////////////////////////

#include<iostream>
#include<iomanip>
#include<bitset>
using namespace std;


void decimalToBinary(unsigned int n,int*to,int idx) {
    if (n > 1) {
        decimalToBinary(n / 2,to,idx+1); // 递归转换更高位
    }
    std::cout << (n % 2); // 打印最低位
	to[idx]=(n%2);
}
 
// chu shi hua, she 0;
void init (int length,int* v) {
	for(int i=0;i<length;++i) {
		v[i]=0;
	}
}

void set (int length,int* to, int value) {
//	cout<<endl<<"@"<<__LINE__<<endl;
	decimalToBinary(value,to,0);
//	cout<<endl<<"@"<<__LINE__<<endl;
}

void set (int length,int* to, int* from) {
	for(int i=0;i<length;++i) {
		to[i]=from[i];
	}
}
// c=a+b;
void add (int length, int* a, int* b,int* c) {
	
	int carry =0;
	for(int i=0;i<length;++i) {
		int sum=a[i]+b[i]+carry;
		if(sum>1) {
			carry=1;
			c[i]=sum%2;
		} else {
			c[i]=sum;
			carry=0;
		}
	}
}

void show (int length,int* v) {
	unsigned sum=0;
	long long suml=0;
	for(int i=length-1;i>=0;--i) {
//		cout<<v[i]<<"_";
		cout<<v[i];
		sum+=v[i];
		sum*=2;
		suml+=v[i];
		suml*=2;
	}
	
	sum/=2;
	suml/=2;
	cout<<"("<<sum<<")";
	cout<<"\t("<<suml<<")";
	if (sum!=suml) {cout<<" * ";}
	
	cout<<endl;
}


int main() {
	
//	
//	cout<<"3 digits:"<<endl;
//	
//	int u=34567;
//	cout<<u%10<<endl;
//	// a u  u/10%10
//	cout<<u/10%10<<endl;
//	cout<<u/10/10%10<<endl;
	
	const int N=36;
	int a;
//	int  gb[36],gc[36],gd[36];
	
//	show(N,ga);
//	init(N,ga);
//	show(N,ga);
//	init(N,gb);
//	init(N,gc);
//	init(N,gd);
	cin>>a;
	
	int n_0[36],n_1[36],n_2[36];
	
	init(N,n_0);
	init(N,n_1);
	init(N,n_2);
	set(N,n_0,1);
	set(N,n_1,1);
	cout<<endl<<"@"<<__LINE__<<endl;
	
	for(int i=0;i<a;++i) {
		add(N,n_0,n_1,n_2);
		show(N,n_0);
		set(N,n_0,n_1);
		set(N,n_1,n_2);
	}
	/*
	n_0=1;
	n_1=1;
	for(int i=0;i<a;++i) {
		n_2=n_0+n_1;
		cout<<n_0<<endl;
		// yiwei:
		n_0=n_1;
		n_1=n_2;
	}
	*/
	
	/*
	unsigned a,b=1,c=1,d=1;
	//   100:
	//  110_0100
	//   1111_1111_1111_1111_1111_1111_1111_1111
	cin>>a;
	#if 1
	if(a>1) {
		cout<<b<<endl;
		cout<<c<<endl;
		for(d=1; d<(a-1); d++) {
			if(b>=c) {
				c=c+b;
				cout<<c<<"\t("<<bitset<32>(c)<<")"<<endl;
			} else {
				b=c+b;
				cout<<b<<"\t("<<bitset<32>(b)<<")"<<endl;
			}
		}
	} else {
		cout<<b<<"\t("<<bitset<32>(b)<<")"<<endl;
	}
	#else
	int n_0,n_1,n_2;
	n_0=1;
	n_1=1;
	for(int i=0;i<a;++i) {
		n_2=n_0+n_1;
		cout<<n_0<<endl;
		// yiwei:
		n_0=n_1;
		n_1=n_2;
	}
	#endif
	*/
	return 0;
}
