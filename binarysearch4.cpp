#include <bits/stdc++.h>
using namespace std;
int  bin(int arr[],int x,int l,int h){
    if(l<h){
    int m=(l+h)/2;
    if(arr[m]==x)return m;
    if(arr[m]>x){
        if(m-1>=l&&x>arr[m-1])return m;
        return bin(arr,x,l,m-1);
    }
    else{   if(m+1<=h&&x<arr[m+1])return m+1;
        return bin(arr,x,m+1,h);
        
    }
}
}
int main() {
    int x;
    cin>>x;
    int arr[]={1,2,4,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=bin(arr,x,0,n-1);
    cout<<"the element is found at "<<i;
    
	return 0;
}
