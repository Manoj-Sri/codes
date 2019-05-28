#include <bits/stdc++.h>
using namespace std;

int  bin(int arr[],int l,int h){
    int m=(l+h)/2;
    if(h<l)return arr[m];
    if(l==h)return arr[0];
    if(arr[m]>arr[m+1]&&m<h)return arr[m+1];
    if(arr[m]<arr[m-1]&&m>l)return arr[m];
    else if(arr[h]<arr[m])return bin(arr,m+1,h);
    return bin(arr,l,m-1);}

int main() {
    
    int arr[]={4,5,6,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int k=bin(arr,0,n-1);
    cout<<k;
	return 0;
}
