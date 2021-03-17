#include <bits/stdc++.h>
using namespace std;
/*
Note that swapping the two knights doesn't cause an incremet
for example 
[k1 0
 0 k2]
 is the same as
 [k2 0
 0 k1]
 --------------------------------------
 note :
 (n-2)*(n-1) will count the number of 3*2 rectangles in the 
 n*n board and that there are 2 ways to put 2 knights in 3*2 or 2*3
 rectangles  */
int main(){
    long long int n;
    cin>>n;
    for(long long int i=1;i<=n;i++){
        long long int r = (((i*i)*(i*i-1))/2)-(4*(i-1)*(i-2));
        cout<<r<<endl;
    }
}