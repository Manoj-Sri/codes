#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    
	    int l=0;int r=n-1;
	    while(l<r){
	        while(l<r&&arr[r]==1){
	            r--;
	        }
	        while(l<r&&arr[l]==0){
	            l++;
	        }
	        if(l<r)
	        {
	            arr[l]=0;
	            arr[r]=0;
	            l++;r--;
	        }
	    }
	    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	    cout<<endl;
	    
	}
	return 0;
}
