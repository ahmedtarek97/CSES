#include <bits/stdc++.h>
using namespace std;

int main(){

    unsigned long long n; 
    unsigned long long sum =0;   
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        sum+=x;

    }

    unsigned long long rsum = (n*(n+1))/2;
    cout<< rsum - sum;
    return 0;

}