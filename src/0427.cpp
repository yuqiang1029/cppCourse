//0427 ��ҵ

//## 0427
//### 1 ����3��4��С����������ֵ
//### 2 ����3���ַ��������С�ַ�
//### 3 ����3�������Ƚ���֮�󣬰���С�����˳��
#include<iostream>
using namespace std;
int main() {
#if 0
////1
	float v1=0;
	float v2=0;
	float c=0;
	while(1) {
		cout<<"���������� �������������"<<endl;
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
	cout<<"���ֵ��"<<v1<<endl;
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
