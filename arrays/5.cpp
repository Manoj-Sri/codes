#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;int k;
	    cin>>k;
	    int h[n];
	    for(int i=0;i<n;i++)cin>>h[i];
	    int l=0;int r=n-1;
	    sort(h,h+n);
	    int flag=0;
	    while(l<r){
	        if(h[l]+h[r]==k){
	            flag=1;
	            break;
	        }
	        else if(h[l]+h[r]<k)l++;
	        else r--;
	        
	    }
	    if(flag==1)cout<<"Yes";
	    else cout<<"No";
	    cout<<endl;
	}
	return 0;
}
