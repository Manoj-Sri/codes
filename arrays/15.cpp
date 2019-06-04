#include <bits/stdc++.h>
using namespace std;


int main() 
{
	//code
	int t,n,i,j,k,p;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int a[m][n];
	    for(i=0;i<m;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	        }
	    }
	  int up=0,right=n-1,down=m-1,left=0;
    while(up<=down && left<=right )
    {
        for(i=up;i<=right;i++)
        {
            cout<<a[up][i]<<" ";
        }
        up++;
        for(i=up;i<=down;i++)
        {
            cout<<a[i][right]<<" ";
        }
        right--;
        if(up<=down)
        {
        for(i=right;i>=left;i--)
        {
            cout<<a[down][i]<<" ";
        }
        down--;
        }
        if(left<=right)
        {
        for(i=down;i>=up;i--)
        {
            cout<<a[i][left]<<" ";
        }
        left++;
        }
        
    }
    cout<<endl;
	       
	}
	return 0;
}
