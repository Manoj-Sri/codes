#include <bits/stdc++.h>
using namespace std;

int  bin(int arr[],int x,int l,int h){
    if(l<=h){
    int m=(l+h)/2;
      if((arr[m]==x)&&(m==0||arr[m-1]<x))return m;
    
    else if(arr[m]<x)return bin(arr,x,m+1,h);
    return bin(arr,x,l,m-1);}
}
bool majority(int arr[],int n,int x){
      int i=bin(arr,x,0,n-1);
      if(i==-1)return -1;
      if(((n/2+1)<=n-1)&&arr[i+n/2]==x)return true;
      return false;
}

int main() {
    int x;
    cin>>x;
    int arr[]={1,2,3,3,3,3,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(majority(arr,n,x))cout<<"majority only";
    else cout<<"not in majority";

    
	return 0;
}
