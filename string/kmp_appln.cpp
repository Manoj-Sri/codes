//string formaation from substring
abcbababc true;
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
      
    int flag=1;
        int length=n-k;
        if(n%length!=0 || f[n-1]==0 ||n==1)
            flag=0;
        else
        {
            for(int i=0;i<n;i++)
            {
                    if(x[i%length]!=x[i])
                    {
                        flag=0;
                        break;
                    }
            }
        }
        if(flag)
           cout<<"True"<<endl;
        else
            cout<<"False"<<endl;

    }
}
