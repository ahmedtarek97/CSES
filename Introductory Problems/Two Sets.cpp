#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int sum = (n*(n+1))/2;
    vector<int>set1;
     vector<int>set2;
    if(sum%2!=0){
        cout<<"NO"<<endl;
    }else{
        long long int setSum = sum/2;
        for(int i=n;i>0;i--){
            if(i<=setSum){
                set1.push_back(i);
                setSum -= i;
            }else{
                set2.push_back(i);
            }
        }
        cout<<"YES"<<endl;
        cout<<set1.size()<<endl;
        for(int i=0;i<set1.size();i++){
            cout<<set1[i]<<" ";
        }
        cout<<endl<<set2.size()<<endl;
        for(int i=0;i<set2.size();i++){
            cout<<set2[i]<<" ";
        }

    }

}