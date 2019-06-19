#include<bits/stdc++.h>
using namespace std;
int dp[5000];
int n,x,y,z;
int cut(int n){
    if(n==0)return 0;
    if(n<0)return -100000;
    if(dp[n]!=-1)return dp[n];
    else dp[n]=1+max(cut(n-x),max(cut(n-y),cut(n-z)));
    return dp[n];
}
int main(){
    int t;cin>>t;
    
    while(t--){
        memset(dp,-1,sizeof(dp));
        cin>>n>>x>>y>>z;
        int k=cut(n);
        cout<<k<<endl;
    }
}
