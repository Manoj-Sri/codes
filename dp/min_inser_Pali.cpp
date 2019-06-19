#include<bits/stdc++.h>
using namespace std;
int dp[500][500];
string x;
int cut(string x,int l,int h){
     if (l > h) return INT_MAX; 
    if (l == h) return 0; 
    if (l == h - 1) dp[l][h]= (x[l] == x[h])? 0 : 1; 
     if(dp[l][h]!=-1)return dp[l][h];
     if(x[l] == x[h])  
                    dp[l][h]=cut(x, l + 1, h - 1);
                    
    else{dp[l][h]=(min(cut(x, l, h - 1), cut(x, l + 1, h)) + 1); 
}
    return dp[l][h];
}
int main(){
    int t;cin>>t;
    
    while(t--){
        memset(dp,-1,sizeof(dp));
        cin>>x;
        int k=cut(x,0,x.length()-1);
        cout<<k<<endl;
    }
    return 0;
    
}
