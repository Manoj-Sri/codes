#include <bits/stdc++.h>
using namespace std;

int  bin(int arr[],int l,int h){
    if(l==h)return arr[l];
    if((h==l+1)&&arr[l]>arr[h])return arr[l];
     if((h==l+1)&&arr[l]<arr[h])return arr[h];
    
    if(l<h){
        
    int m=(l+h)/2;
    if(arr[m]>arr[m+1]&&arr[m]>arr[m-1])return arr[m];
    if(arr[m]>arr[m+1]&&arr[m]<arr[m-1]){
    
        return bin(arr,l,m-1);
    }
    return bin(arr,m+1,h);
   
}
}
int main() {
    
    int arr[]={1, 3, 50, 10, 9, 7, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=bin(arr,0,n-1);
    cout<<"the element is found for "<<i;
    
	return 0;
}
