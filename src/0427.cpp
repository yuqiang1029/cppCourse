//0427 作业

//## 0427
//### 1 输入3、4个小数，输出最大值
//### 2 输入3个字符，输出最小字符
//### 3 输入3个数，比较完之后，按从小到大的顺序
#include<iostream>
using namespace std;
int main() {
#if 0
////1
	float v1=0;
	float v2=0;
	float c=0;
	while(1) {
		cout<<"请输入数字 负数代表结束："<<endl;
		cin>>c;
		if(c<0) {
			break;
		}
		if(v2>c) {

		} else if(v1<c) {
			v2=v1;
			v1=c;
		} else {
			v2=c;
		}
		cout<<endl;
		cout<<"1st:"<<v1<<endl;
//		cout<<endl;
		cout<<"2nd:"<<v2<<endl;
//		cout<<endl;
	}
	cout<<"最大值："<<v1<<endl;
#endif
#if 0
//2
	char a,b,c;
	cin>>a>>b>>c;
	if (a<b) {
		if(a<c)
			cout<<a;
		else
			cout<<c;
	} else {
		if(b<c)
			cout<<b;
		if(c<b)
			cout<<c;
	}
#endif
//3
#if 1
	float a,b,c;
	cin>>a>>b>>c;
	if (a>b) {
		if(a>c) {

			if (b>c) {
				cout<<a<<">"<<b<<">"<<c;
			} else {
				cout<<a<<">"<<c<<">"<<b;
			}
		} else {
			cout<<a<<">"<<c<<">"<<b;
		}
	} else {
		if(b>c) {
			if (c>a) {
				cout<<b<<">"<<c<<">"<<a;
			} else {
				cout<<b<<">"<<a<<">"<<c;
			}
		}
		if(c>b) {
			cout<<c<<">"<<b<<">"<<a;
		}
	}
#endif
	return 0;
}
