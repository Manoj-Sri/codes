 
#include <bits/stdc++.h> 

using namespace std; 
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;int temp;
         vector<int> mp(200);
        for(int i=0;i<m*n;i++){cin>>temp;mp[temp]=1;}
        int k;
        cin>>k;
        if(mp[k]==1)cout<<"1";
        else cout<<"0";
        cout<<endl;
    }
}
