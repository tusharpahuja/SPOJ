#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int i,a;
while(cin>>a){
    if(a!=42){
        cout<<a<<endl;
    }
    else{
        exit(0);
    }
}
return 0;
}
