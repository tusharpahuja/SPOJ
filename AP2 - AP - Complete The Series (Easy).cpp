#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main() {
	long long t,i,a1,a2,s,n,d,val,pre;
	cin>>t;
	while(t--){
        cin>>a1>>a2>>s;
        n = 2*s/(a1+a2);
        val = n-5;
        d = (a2-a1)/val;
        pre = a1-2*d;
        cout<<n<<endl;
        cout<<pre<<" ";
        for(i=1;i<n;i++){
            cout<<pre+d<<" ";
            pre += d;
        }
        cout<<endl;
	}
	return 0;
}
