#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,r=1;
    const long long x = 1000000007;
    cin>>n;

    for(int i=0;i<n;i++){
        r = ((r%x)*2)%x ;
    }

    cout<<r<<"\n";
}