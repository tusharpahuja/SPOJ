#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;
#include<stdlib.h>

int main(){
int n,i;
cin>>n;
long long a,b,s,n1,n2,r,q,rs;
while(n--){
    cin>>a>>b;
    n1=0;
    n2=0;
    rs=0;
    while(a>0){
        n1 = 10*n1 + a%10;
        a = a/10;
    }
    while(b>0){
        n2 = 10*n2 + b%10;
        b = b/10;
    }
    s = n1+n2;
    while(s>0){
        rs = 10*rs + s%10;
        s = s/10;
    }
    cout<<rs<<endl;
}
return 0;
}
