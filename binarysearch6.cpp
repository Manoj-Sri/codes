#include <bits/stdc++.h>
using namespace std;

int  bin(int arr[],int x,int l,int h){
    if(l<h){
    int m=(l+h)/2;
    if(arr[m]==x)return m;
    if(arr[m]>x){
    
        return bin(arr,x,l,m-1);
    }
    return bin(arr,x,m+1,h);
   
}
}
int cou(int arr[],int n,int x){
    int i=bin(arr,x,0,n-1);
    int c=1;
    int l=i-1;
     while (l >= 0 && arr[l] == x) 
         c++, l--; 
  int r = i + 1; 
    while (r < n && arr[r] == x) 
        c++, r++; 
  
    return c; 
}
int main() {
    int x;
    cin>>x;
    int arr[]={1,2,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=cou(arr,n,x);
    cout<<"the element is found for "<<i;
    
	return 0;
}
