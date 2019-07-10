#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int e=n&0xAA;
    int o=n&0x55;
    e>>=1;
    o<<=1;
    int f=e|o;
    cout<<f;
}
