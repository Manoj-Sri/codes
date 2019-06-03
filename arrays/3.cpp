#include <bits/stdc++.h>
using namespace std;

int main() {
int i,j,m,n,t;
	cin>>t;
	while(t--){
	    cin>>n;
	    int temp;int ans=0;
	    for(int i=1;i<n+1;i++){
	        cin>>temp;
	       ans^=temp;
	    }
	   cout<<ans;
	   cout<<endl;
	}
	return 0;
}
