#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream fout("./out.csv");
	for(int a=0;a<10;a++){
		for(int b=0;b<10;b++){
			for(int c=0;c<10;c++){
				fout<<a<<","<<b<<","<<c<<endl;
			}
		}
	}
	return 0;
}
