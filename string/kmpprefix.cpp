#include<bits/stdc++.h>
using namespace std;
int f[100000];
int prefix(string x,int n){
    int i=1;int j=0;
    while(i<n){
        if(x[i]==x[j]){
            f[i]=j+1;
            i++;j++;
        }
        else if(j>0){
            j=f[j-1];
        }
        else {
            f[i]=0;
            i++;
        }
    }
    return f[n-1];
}
int main(){
    int t;
    cin>>t;
    while(t--){
       string x;
        cin>>x;
        for(int i=0;i<100000;i++)f[i]=0;
        int n=x.length();
       int k= prefix(x,n);
       cout<<k<<endl;
    }
}
