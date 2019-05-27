#include <bits/stdc++.h> 
using namespace std; 
#define NA -1 
void move(int M[], int s) 
{ 
   int j = s-1; 
   for (int i = s-1; i >= 0; i--) 
     if (M[i] != NA) 
     { 
        M[j] = M[i]; 
        j--; 
     } 
} 
int merge(int M[], int N[], int m, int n) 
{ 
   int i = n; 
   int j = 0; int k = 0; 
   while (k < (m + n)) 
   { if ((i < (m + n) && M[i] <= N[j]) || (j == n)) 
    { 
        M[k] = M[i]; 
        k++; 
        i++; 
    } 
    else{ 
       M[k] = N[j]; 
       k++; 
       j++; 
    } 
   } 
} 
int main() 
{  int M[] = {2, 8, NA, NA, NA, 13, NA, 15, 20}; 
   int N[] = {5, 7, 9, 25}; 
     
   int n = sizeof(N) / sizeof(N[0]); 
   int m = sizeof(M) / sizeof(M[0]) - n; 
   move(M, m + n); 
    merge(M, N, m, n); 
 for (int i = 0; i < m+n; i++) 
   cout << M[i] << " "; 
   return 0; 
} 
