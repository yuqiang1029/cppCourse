#include<iostream>
using namespace std;
int main(){
	/*
	for(int a=1;a<100;a++){
		if(a%10==5){
			continue;
		}else if(a>80){
			break;
		}else{
			cout<<a<<endl;
		}
	}
	*/
	
	for(int a=1;a<100;a++){
		if(a>=80){
			break;
		}else if(a%5==0){
			cout<<a<<endl;
		}else{
			continue;
		}
	}
	  
	
//	for(int a=1;a<100;a++){
//	 if(a>=10){
//			break;
//		}
//			cout<<a<<endl;  
//	}
	return 0;
}
/**/
