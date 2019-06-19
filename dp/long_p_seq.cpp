#include<bits/stdc++.h>
using namespace std;
int dp[500][500];
string x;
int cut(string x,int l,int h){
     if (l > h) return INT_MIN; 
    if (l == h) return 1; 
     if(dp[l][h]!=-1)return dp[l][h];
     if(x[l] == x[h]&&l == h - 1) 
     return 2;
     if(x[l] == x[h])
                    dp[l][h]=cut(x, l + 1, h - 1)+2;
                    
    else{dp[l][h]=(max(cut(x, l, h - 1), cut(x, l + 1, h))); 
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
