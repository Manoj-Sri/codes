#include<bits/stdc++.h> 
using namespace std;
int maxi(int x, int y, int z); 
  int n;
  int dp[100][100];
  int b[100][100];
int minCost( int m, int k) 
{ 
   if (m == n|| k==n|| k==-1) 
      return 0; 
      if(dp[m][k]!=-1)return dp[m][k];
   if ( m == n-1) 
      return b[m][k]; 

      dp[m][k]=b[m][k] + maxi( minCost(m+1, k+1), 
                               minCost( m+1, k),  
                           minCost( m+1, k-1) ); 

    return dp[m][k];
} 
  
int maxi(int x, int y, int z) 
{ 
   if (x > y) 
      return (x > z)? x : z; 
   else
      return (y > z)? y : z; 
} 
  
int main() 
{ int t;
cin>>t;
while(t--){
     
cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
           
        }
    }
     for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
          dp[i][j]=-1;
           
        }
    }
    int mini=INT_MIN;
    for(int i=0;i<n;i++){
        int res=minCost(0,i);
        if(mini<res)mini=res;
    } 
    cout<<mini<<endl;
}
    
   return 0; 
} 
