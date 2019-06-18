#include <bits/stdc++.h>
using namespace std;

int minj(int arr[],int n){
    if(n==0||arr[0]==0)return INT_MAX;
    int jumps[n]={0};
    for(int i=1;i<n;i++){
        jumps[i]=INT_MAX;
        for(int j=0;j<i;j++){
            if(i<=j+arr[j]&&jumps[j]!=INT_MAX){
                jumps[i]=min(jumps[i],jumps[j]+1);
                break;
            }
        }
    }
    
    return jumps[n-1];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)cin>>arr[i];
	    int k=minj(arr,n);
	    if(k==INT_MAX)cout<<"-1"<<endl;
	    else
	    cout<<k<<endl;
	}
	return 0;
}
