#include <bits/stdc++.h>

using namespace std;
int n,m;

bool valid(int r,int c){
    return r>=0&&r<n&&c>=0&&c<m;
}

int main(){
    bool f=0;
    int dis;
    int k,l;
    queue< pair<int,int> > q;
    cin>>n>>m;
    char g[n][m];
    vector< vector<bool> > visited(1000,vector<bool>(1000,false));
     vector< vector<int> > distance(1000,vector<int>(1000,100000000));     
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>g[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(g[i][j]=='A'){
                q.push(make_pair(i,j));
                distance[i][j] = 0;
                visited[i][j] = true;
                while(!q.empty()){
                    pair<int,int>s = q.front();
                    int x = s.first;
                    int y = s.second;
                    if(g[s.first][s.second]=='B') {
                        dis = distance[s.first][s.second];
                        k =s.first;
                        l=s.second;
                        f=true;
                        break;}                  
                    q.pop();

                    if(valid(x-1,y)&&!visited[x-1][y]&&(g[x-1][y]=='.' || g[x-1][y] =='B')){
                        q.push(make_pair(x-1,y));
                        distance[x-1][y] = distance[x][y]+1;
                        visited[x-1][y] = true;
                       
                    }
                    if(valid(x+1,y)&&!visited[x+1][y]&&(g[x+1][y]=='.' || g[x+1][y] =='B')){
                        q.push(make_pair(x+1,y));
                        distance[x+1][y] = distance[x][y]+1;
                        visited[x+1][y] = true;
                        
                    }

                    if(valid(x,y-1)&&!visited[x][y-1]&&(g[x][y-1]=='.' || g[x][y-1] =='B')){
                        q.push(make_pair(x,y-1));
                        distance[x][y-1] = distance[x][y]+1;
                        visited[x][y-1] = true;
                         
                    }

                    if(valid(x,y+1)&&!visited[x][y+1]&&(g[x][y+1]=='.' || g[x][y+1] =='B')){
                        q.push(make_pair(x,y+1));
                        distance[x][y+1] = distance[x][y]+1;
                        visited[x][y+1] = true;
                        
                    }
                    
                }

            }
        }
    }

    if(f){
        cout<<"YES"<<endl;
        cout<<dis<<endl;
        vector<char>path;
        int t =dis;
        for(int i=0;i<t;i++){
            if(valid(k-1,l)&&distance[k-1][l] == dis-1){
                path.push_back('D');
                k--;
                dis--;
                continue;                
            }
            if(valid(k+1,l)&&distance[k+1][l] == dis-1){
                 path.push_back('U');
                k++;
                dis--;
                continue;   
            }
            if(valid(k,l-1)&&distance[k][l-1] == dis-1){
                path.push_back('R');
                l--;
                dis--;
                continue;   
            }
             if(valid(k,l+1)&&distance[k][l+1] == dis-1){
                  path.push_back('L');
                l++;
                dis--;
                continue;   
            }
        }
        for(int i = path.size()-1;i>=0;i--){
            cout<<path[i];
        }
        

    }else{
        cout<<"NO"<<endl;
    }   
}
