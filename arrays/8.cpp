#include <bits/stdc++.h>
using namespace std;

int main() {
int i,j,m,n,t;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int> mp(2000000);
	    int temp;
	    for(int i=1;i<=n;i++){cin>>temp;if(temp>0)mp[temp] = 1;}
	    int ans = 0;
	    for(int i=1;i<2000000;i++)
	        if(mp[i]==0){cout<<i;break;}
	     cout<<endl;     
	}
	return 0;
}
