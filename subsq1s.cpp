// C++ code for Maximum size square 
// sub-matrix with all 1s 
#include <bits/stdc++.h> 
using namespace std; 

bool M[1000][1000];
int  printMaxSubSquare(int R,int C) 
{ 
	int i,j; 
	int S[R][C]; 
	int max_of_s, max_i, max_j; 
	
	/* Set first column of S[][]*/
	for(i = 0; i < R; i++) 
		S[i][0] = M[i][0]; 
	
	/* Set first row of S[][]*/
	for(j = 0; j < C; j++) 
		S[0][j] = M[0][j]; 
		
	/* Construct other entries of S[][]*/
	for(i = 1; i < R; i++) 
	{ 
		for(j = 1; j < C; j++) 
		{ 
			if(M[i][j] == 1) 
				S[i][j] = min(S[i][j-1],min( S[i-1][j], 
								S[i-1][j-1])) + 1; 
			else
				S[i][j] = 0; 
		} 
	} 
	
	/* Find the maximum entry, and indexes of maximum entry 
		in S[][] */
	max_of_s = S[0][0]; max_i = 0; max_j = 0; 
	for(i = 0; i < R; i++) 
	{ 
		for(j = 0; j < C; j++) 
		{ 
			if(max_of_s < S[i][j]) 
			{ 
				max_of_s = S[i][j]; 
				max_i = i; 
				max_j = j; 
			} 
		}			 
	} 

	return max_of_s; 

} 


/* Driver code */
int main() 
{ int t;
cin>>t;
while(t--){
     int n,m;
cin>>n;cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>M[i][j];
           
        }
    }
    
    int mini=printMaxSubSquare(n,m); 
    cout<<mini<<endl;
}
	return 0;
} 
