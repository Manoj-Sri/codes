#include<bits/stdc++.h>
using namespace std;

vector<int> gp[10000],border(10000),lake,visited(10000);
bool flag=0;
int siz=0;
void dfs(int i){
    visited[i]=1;
    siz++;
    if(border[i]==1){
        flag=1;
    }
    for(auto x:gp[i]){
        
        if(visited[x]==0){
            dfs(x);
        }
    }
}
int main(){
    int m,n,k;
    cin>>n>>m>>k;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c++;
            if(i==0||i==n-1||j==0||j==m-1){
                border[c] =1;
            }
            if(arr[i][j]=='.'){
               gp[c].push_back(c); 
                if(i+1<n&&arr[i+1][j]=='.'){
                    gp[c].push_back(c+m);
                }
                if(i-1>=0&&arr[i-1][j]=='.'){
                    gp[c].push_back(c-m);
                }
                if(j+1<m&&arr[i][j+1]=='.'){
                    gp[c].push_back(c+1);
                }
                if(j-1>=0&&arr[i][j-1]=='.'){
                    gp[c].push_back(c-1);
                }
                
            }
            
        }
    }
    for(int i=1;i<=m*n;i++){
        if(gp[i].size()!=0&&visited[i]==0){
            dfs(i);
            if(flag==0){
                lake.push_back(siz);
            }
            flag=0;siz=0;
        }
    }
    sort(lake.begin(),lake.end());
    int sum = 0;
    int x = max((int)0, (int)(lake.size()-k));
    for(int i=0;i<x;i++)
        sum += lake[i];
    cout<<sum;
}
