#include <bits/stdc++.h>
using namespace std;

int  bin(int arr[],int l,int h){
    if(l<h){
    int m=(l+h)/2;
    if(arr[m]==m)return m;
    if(arr[m]>m){
    
        return bin(arr,l,m-1);
    }
    return bin(arr,m+1,h);
   
}
}
int main() {
    
    int arr[]={-10, -1, 0, 3, 10, 11, 30, 50, 100};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=bin(arr,0,n-1);
    cout<<"the element is found for "<<i;
    
	return 0;
}
