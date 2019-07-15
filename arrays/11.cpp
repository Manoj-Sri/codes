#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    sort(arr,arr+n);
	    int mind=34563456;
	    for(int i=0;i<n-1;i++){
	        if(mind>(arr[i+1]-arr[i]))mind=(arr[i+1]-arr[i]);
	    }
	    cout<<mind<<endl;
	}
	return 0;
}
//instead of sorting check using previous method using absolute value
