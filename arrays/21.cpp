#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    int maxsofar=INT_MIN;int maxendhere=0;
	    
	   
	    for(int i=0;i<n;i++)
	    {
	        maxendhere+=arr[i];
	        if(maxsofar<maxendhere)maxsofar=maxendhere;
	        if(maxendhere<0)maxendhere=0;
	    }
	    cout<<maxsofar;
	    cout<<endl;
	    
	}
	return 0;
}
