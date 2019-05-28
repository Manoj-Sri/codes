#include<bits/stdc++.h>
using namespace std;
int mod(int x,int y,int m){
 if(x==0)return 0;
 if(y==0)return 1;
 int temp;
 if(y%2==0){
     temp=mod(x,y/2,m);
     temp=(temp*temp)%m;
     
 }
 else{
     temp=x%m;
     temp=(temp*mod(x,y-1,m)%m)%m;
     
 }
 return (temp+m)%m;
}
int main()  
{  
   int A = 2, B = 5, C = 13; 
   printf("Power is %d", mod(A, B, C));  
   return 0;  
}  
