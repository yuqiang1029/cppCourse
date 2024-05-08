#include<iostream>
#include<stdio.h>
//#include<>
using namespace std;



#include "point24.h"

int main() {
	int a,b,c,d;
//	cin>>a>>b>>c>>d;
	a='9';
	b='3';
	c='4';
	d='8';

//	char form[16]="1+2+6/2";
	char opa[5]="+-*/";
	char form[16]="1+2+6/2";
	form[0]=a;
	form[2]=b;
	form[4]=c;
	form[6]=d;
	for(int op0=0; op0<4; ++op0) {
		for(int op1=0; op1<4; ++op1) {
 
			for(int op2=0; op2<4; ++op2) {

				form[1]=opa[op0];
				form[3]=opa[op1];
				form[5]=opa[op2];
				tokenizer_init(form);
				int r=expr();
				if (r==24) {
					cout<<form<<"="<<r<<" V"<<endl;
				} else {

					cout<<form<<"="<<r<<endl;
				}
			}
		}

	}
//	if(a>13 | b>13 | c>13 | d>13){
//		cout<<"输大了"<<endl;
//	}
//
//	if(a*b==24){
//		cout<<"a*b="<<a*b;
//
//	}else if(a+b==24){
//		cout<<"a+b="<<a+b;
//	}else{
//		cout<<"凑不了"<<endl;
//	}
	return 0;
}

//#include <windows.h>
//#include <WinUser.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//
//    BOOL opened; // 计算器是否已经成功打开的标志
//    STARTUPINFO si ={sizeof(si)}; // 计算器启动信息
//    PROCESS_INFORMATION pi; // 计算器进程信息
//    HWND h1 = NULL; // 计算器窗口指针
//    int i=0;
//    BOOL postMsgResult;
//
//
//
//    // 打开计算器
//    opened = CreateProcess(NULL, "calc.exe", NULL, NULL, FALSE, 0, NULL,NULL, &si, &pi);
//    if ( !opened ) {
//        printf("无法打开计算器，错误码 = %d\n", GetLastError());
//        return 1;
//    }
//
//    // 找到该窗口
//    while ( h1 == NULL && i < 3 ){
//         h1 = FindWindow(NULL, "计算器");
//         if ( h1 == NULL ) {
//            i ++;
//            Sleep(1000);
//         }
//    }
//    if ( h1 == NULL ) {
//        printf("找不到已经打开的计算器，错误码 = %d\n", GetLastError());
//        return 1;
//    }
//    for(i = 0; i < 3; i++){
//        // keybd_event(0x39,0,KEYEVENTF_KEYUP,0); // FIXME
//        // msgResult = SendMessage(h1,WM_CHAR,'4',0); // FIXME
//        SetLastError(0);
//       postMsgResult = PostMessage(h1,WM_CHAR,'1'+i,0);
//        if ( i < 2 ){
//            PostMessage(h1,WM_CHAR,'+',0);
//        } else {
//            PostMessage(h1,WM_CHAR,'=',0);
//        }
//        printf("result=%d, error=%d\n", postMsgResult, GetLastError());
//        Sleep(1000);
//    }
//
//    system("Pause");
//    return 0;
//}
