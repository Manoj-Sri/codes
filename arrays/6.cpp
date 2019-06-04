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
	    sort(h,h+n);
	    
	    int flag=0;
	    for(int i=0;i<n-2;i++){
	    int l=i+1;int r=n-1;
	    
	    while(l<r){
	        if(h[l]+h[r]+h[i]==k){
	            flag=1;
	            break;
	        }
	        else if(h[i]+h[l]+h[r]<k)l++;
	        else r--;
	        
	    }}
	    if(flag==1)cout<<"1";
	    else cout<<"0";
	    cout<<endl;
	}
	return 0;
}
