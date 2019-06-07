#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	int n,k,data,x,r;
	while(t--)
	 {
	 cin>>n>>k;
	 int arr[n+1]={0};
	 for(int i=0;i<n;i++)
	    {
	        cin>>data;
	        arr[data]++;
	    }
	    r=0;
	    x=INT_MIN;
	   for(int i=0;i<k;i++)
	     {
	         if(arr[i]>x)
	           {
	               x=arr[i];
	               r=i;
	           }
	     }
	    cout<<r<<endl; 
	 }
	return 0;
}
