#include <bits/stdc++.h>
using namespace std;

int main() {
int i,j,m,n,t;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    vector<int> mp(200000);
	    int temp;
	    for(int i=1;i<=m;i++){cin>>temp;mp[temp] = 1; }
	    for(int i=1;i<n+1;i++){
	        cin>>temp;
	        if(mp[temp]==1)mp[temp]=2;
	        
	    }
	    int ans = 0;
	    for(int i=0;i<200000;i++)
	        if(mp[i]==2)
	            ans++;
	   cout<<ans<<endl;
	}
	return 0;
}
