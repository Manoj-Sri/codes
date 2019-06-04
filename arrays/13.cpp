#include <iostream>
using namespace std;

int main() {
	//code
	int t;cin>>t;
	while(t--){
	    int n;
	    cin>>n;int arr[n];
	int sum = 0; 
    int leftsum = 0; 
    for (int i = 0; i < n; ++i)  
        {cin>>arr[i];sum += arr[i];}  
  int flag=0;
    for (int i = 0; i < n; ++i)  
    {  
        sum -= arr[i]; 
        if (leftsum == sum)  
            {cout<<i+1; flag=1;break;}  
  
        leftsum += arr[i];  
    }  
    if(flag==0)cout<<"-1";
  cout<<endl; } 
	return 0;
}
