#include <bits/stdc++.h>
#define N 100000
using namespace std;
vector<int>g[N];
bool visited[N];
vector<int>path;

void dfs(int s){
    if(visited[s]) return;
    visited[s] = true;    
    for(int i:g[s]){
        dfs(i);
        
    }
}

int main(){
    int n,m,x,y;
    cin>>n>>m;
    vector< pair<int,int> > roads;        
    for(int i=0;i<m;i++){
       cin>>x>>y;
       g[x-1].push_back(y-1);
       g[y-1].push_back(x-1);
    }

    for(int i=0;i<n;i++){
        if(!visited[i]){
            path.push_back(i);
            dfs(i);
        }
    }

    for(int i=0;i<path.size()-1;i++){
        roads.push_back(make_pair(path[i],path[i+1]));
    }

    cout<<roads.size()<<endl;
    for(auto u:roads){
        cout<<u.first+1<<" "<<u.second+1<<endl;
    }
    
}