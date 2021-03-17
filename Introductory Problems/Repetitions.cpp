#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int max=1;
    int rep =1;
    for(int i=1;i<s.size();i++){
        while(i<s.size() && s[i]==s[i-1]){
            rep++;
            i++;
        }
        if(rep>max){
            max =rep;            
        }
        rep=1;
       
    }

    cout<<max<<endl;    

}
