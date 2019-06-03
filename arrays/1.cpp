#include <bits/stdc++.h>
using namespace std;

int main() {
int i,j,m,n,t;
	cin>>t;
	while(t--){
	    cin>>m>>n;
	    vector<int> mp(200000);
	    int temp;
	    for(int i=1;i<=m+n;i++){cin>>temp;mp[temp] = 1;}
	    int ans = 0;
	    for(int i=0;i<200000;i++)
	        if(mp[i])
	            ans++;
	   cout<<ans<<endl;
	}
	return 0;
}
