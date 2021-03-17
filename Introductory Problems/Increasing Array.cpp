#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long int n,x,c=0,y;
 
    cin>>n;
    cin>>x;
    for(int i=0; i<n-1;i++){
       cin>>y;
       if(x>y){
        c += x-y;
        y += x-y;
       }
       x=y;
    }
    cout<<c<<endl;
 
    return 0;
}