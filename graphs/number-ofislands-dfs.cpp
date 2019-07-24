
void dfs(vector<int> A[],vector<vector<bool>> &visited,
int i,int j,int N,int M){
 visited[i][j]=true;
  for(int x=i-1;x<=i+1;x++){
      for(int y=j-1;y<=j+1;y++){
          if(x>=0&&y>=0&&x<N&&y<M){
              if(!(x==i&&y==j)&&A[x][y]==1&&!visited[x][y]){
                  dfs(A,visited,x,y,N,M);
              }
          }
      }
  }
  }
int findIslands(vector<int> A[], int N, int M)
{   int count=0;
vector< vector<bool> > visited(N,vector<bool>(M,false));
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(A[i][j]==1&&!visited[i][j]){
                count++; dfs(A,visited, i, j ,N,M); 
               
            }
        }
    }
    return (count);
}
