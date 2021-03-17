#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t,y,x,r;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        if(x>=y){
            if(x%2!=0){
            r=(x-1)*(x-1) + y;
            }else{
                r = (x*x) - (y-1);
            }
            
        }else{
            if(y%2!=0){
                r = y*y -(x-1);
            }else{
                r=(y-1)*(y-1) + x;
            }
        }
        cout<<r<<endl;
    }
    
}