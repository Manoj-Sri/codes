#include<bits/stdc++.h>  
using namespace std; 
int dp[200][200];
int lcs( string x,string y,int n,int m )  
{ 
    if(m==0)return n;
    if(n==0)return m;
    
    if(dp[n][m] != -1)
        return dp[n][m];
    
    if(x[n-1]==y[m-1]){
        dp[n][m] =lcs(x,y,n-1,m-1);
        return dp[n][m];
    }
    
    else dp[n][m]= 1+min(lcs(x,y,n,m-1),min(lcs(x,y,n-1,m),lcs(x,y,n-1,m-1)));

    return dp[n][m];
}  
int main()  
{  
    
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,y;
        cin>>x;
        cin>>y;
        for(int i=0;i<200;i++)
        for(int j=0;j<200;j++)dp[i][j]=-1;
        int k=lcs(x,y,n,m);
        cout<<k<<endl; }
    
    return 0;  
}
