#include<bits/stdc++.h> 
using namespace std;
 
  int dp[1000][1000];
  int b[1000];
int minCost( int s, int n) 
{ 
   if (s == 0) 
        return 1; 
    if (s < 0) 
        return 0; 
   if (n <=0 && s >= 1) 
        return 0; 
    if(dp[s][n]!=-1)return dp[s][n];
   dp[s][n]= minCost( s, n-1 ) + minCost( s-b[n-1], n ); 
      
  
    return dp[s][n];
} 
  

  
int main() 
{ int t;
cin>>t;
while(t--){
    int n,s;  
cin>>n;
    for(int i=0;i<n;i++){
       
            cin>>b[i];
     
    }
    cin>>s;
     for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
          dp[i][j]=-1;
           
        }
    }
    int res=minCost(s,n);
       cout<<res<<endl;
}
    
   return 0; 
} 
