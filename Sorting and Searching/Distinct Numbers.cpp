#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,c=1;
    vector<int>vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);
    }
    sort(vec.begin(),vec.end());

    for(int i=1;i<n;i++){
       if(vec[i]!=vec[i-1]) c++;
    }

    cout<<c<<endl;

}