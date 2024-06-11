#include <iostream>
using namespace std;
int main(){
    float a;
    cin>>a;
    if(a>100){
        cout<<"To large!"<<endl;
        return 1;
    }
    if (a>=90){
        cout<<"A"<<endl;
    }else if(a>=70){
        cout<<"B"<<endl;
    }else if(a>=60){
        cout<<"C"<<endl;
    }else{
        cout<<"D"<<endl;
    }
    return 0;
}
