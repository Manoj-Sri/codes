#include <bits/stdc++.h>
using namespace std;
int  bin(int arr[],int x,int l,int h){
    if(l<h){
    int mid=(l+h)/2;
    if(arr[mid]==x)return mid;
    if(arr[mid]>=arr[l]){
        if(arr[mid]>=x&&arr[l]<=x)return bin(arr,x,l,mid-1);
        return bin(arr,x,mid+1,h);
    }
    if(arr[mid]<=x&&arr[h]>=x)return bin(arr,x,mid+1,h);
    return bin(arr,x,l,mid-1);}
}

int main() {
    int x;
    cin>>x;
    int arr[]={6,7,8,1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=bin(arr,x,0,n-1);
    cout<<"the element is found at "<<i;
    
	return 0;
}
