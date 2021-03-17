#include <bits/stdc++.h>
#define N 1000
#define M 1000

using namespace std;
 int n,m;
 char g[N][M];
 bool visited[N][M] = {false};

bool valid(int row, int col){
    return row>=0 && row<n && col>=0 && col<m && g[row][col] == '.' && visited[row][col] == false;
}

void dfs(int row, int col){
    visited[row][col]= true;
    if(valid(row-1,col)){
        dfs(row-1,col);
    }
    if(valid(row+1,col)){
        dfs(row+1,col);
    }
    if(valid(row,col-1)){
        dfs(row,col-1);
    }

     if(valid(row,col+1)){
        dfs(row,col+1);
    }
}

int main(){   
    cin>>n>>m; 
    int c=0;    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>g[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(valid(i,j)){
                dfs(i,j);
                c++;
            }
        }
    }
    cout<<c<<endl;
}