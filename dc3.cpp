#include<bits/stdc++.h>
using namespace std;
int me(int arr[],int l,int m,int h){
    int sum=0;
    int left=INT_MIN;
    for(int i=m;i>=l;i--){
        sum+=arr[i];
        if(sum>left)left=sum;
        }
    sum=0;
    int ri=INT_MIN;
    for(int i=m+1;i<=h;i++){
        sum+=arr[i];
        if(sum>ri)ri=sum;
        }
        return left+ri;
}
int ms(int arr[],int l,int h){
    if(l==h)return arr[l];
    int m=(l+h)/2;
    return max(max(ms(arr,l,m),ms(arr,m+1,h)),me(arr,l,m,h));
}
int main(){
    int arr[]={2,3,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=ms(arr,0,n-1);
    cout<<k;
}
