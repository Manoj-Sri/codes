#include <stdio.h>

int main() {
	int t,i,j,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
	    int n;
	    scanf("%d",&n);
	    int arr[n][n];
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            scanf("%d",&arr[i][j]);
	        }
	    }
	    int c=0,c1=0;
	    int l=2*n-1;
	   for(i=0;i<l;i++)
	    {
	        if(i<n)
	        {
	            c=0;c1=i;
	            //printf("%d  %d\n",c,c1);
	            for(j=0;j<=i;j++)
	            {
	                printf("%d ",arr[c][c1]);
	                c++;c1--;
	            }
	        }
	        else
	        {
	            c=n-1;c1=i-c;
	            for(j=n-1;j>(i-n);j--)
	            {
	                printf("%d ",arr[c1][c]);
	                c--;c1++;
	            }
	        }
    	}
	    printf("\n");
	}
	return 0;
}
