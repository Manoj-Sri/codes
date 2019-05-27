#include<bits/stdc++.h>
using namespace std;
void printun(int arr[],int n){
    int start=0;int end=n-1;
    int  max,min;
    for(start=0;start<n-1;start++){
        if(arr[start]>arr[start+1])
        {min=arr[start];
            break;
        }
    }
    for(end=n-1;end>=1;end--){
        if(arr[end]<arr[end-1]){
            max=arr[end];
            break;
        }
    }
    cout<<start<<end+1;
   }
int main(){
    int arr[]={10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60};
    int n=sizeof(arr)/sizeof(arr[0]);
    printun(arr,n);
    
}
