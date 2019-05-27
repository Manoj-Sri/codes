#include <bits/stdc++.h>
using namespace std;
int  bin(int arr[],int x,int l,int h){
    if(l<h){
    int m=(l+h)/2;
    if(arr[m]==x){
        return m;
    }
    else if(arr[m]<x)return bin(arr,x,m+1,h);
    return bin(arr,x,l,m-1);}
}

int main() {
    int x;
    cin>>x;
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=bin(arr,x,0,n-1);
    cout<<"the element is found at "<<i;
    
	return 0;
}

//BIANRY SEARCH BASIC
