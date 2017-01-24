#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
long long a1,a2,a3;
while(cin>>a1>>a2>>a3){
    if(a1==0 && a2==0 && a3==0){
        break;
    }
    if((a2-a1)==(a3-a2)){
        cout<<"AP "<<(2*a3-a2)<<endl;
    }
    else if((a2/a1)==(a3/a2)){
        cout<<"GP "<<(a3*a3/a2)<<endl;
    }
}
return 0;
}






