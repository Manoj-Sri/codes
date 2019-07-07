#include<bits/stdc++.h>
using namespace std;
vector<int> gp[10000],visited(10000);
void dfs(int u){
    visited[u]=1;
    for(auto x:gp[u]){
        if(!visited[x]){
            dfs(x);
        }
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if((arr[i]&arr[j]) == 0){
                    gp[i].push_back(j);
                }
        }
    }
    
    int component =0;
	for(int i=0;i<m;i++){
	    if(!visited[i]){
	        
	        cout<<i<<endl;
	        component++;
	        dfs(i);
	    }
	}
	
	cout<<component<<endl;
}
