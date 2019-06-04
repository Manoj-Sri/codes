#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int r,c;
	    cin>>r>>c;
	    int arr[r][c];
	    map<int,int>hash;
	    int g=-1;int ind;
	    for(int i=0;i<r;i++)
	    {int count=0;
	        for(int j=0;j<c;j++)
	        {
	            cin>>arr[i][j];
	            if(arr[i][j]==1)
	            {
	                count++;
	            }
	        }
	        
	        if(count>g){g=count;ind=i;}
	    }
	  cout<<ind;
	   cout<<"\n";
	   
	}
	return 0;
}
