#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,z=0;
    cin>>n;


    for(int i=5;i<=n;i*=5){
        z+=n/i;
    }
    cout<<z<<endl;
}