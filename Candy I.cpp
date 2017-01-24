#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
long long n,i,s=0,t,d=0;
while(cin>>n){
    if(n==-1){
        break;
    }
    s=0;
    d=0;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        s += a[i];
    }
    if(s%n!=0){
        cout<<-1<<endl;
    }
    else{
        t = s/n;
        for(i=0;i<n;i++){
            d += abs(t-a[i]);
        }
        cout<<d/2<<endl;
    }
}
return 0;
}






