class Solution {
public:
    
    int count(vector<vector<int>>& grid){
         int n=grid.size();
        int m=grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1) cnt++;
            }
        }
        return cnt;
    }
    
    bool isValid(int nx,int ny ,int n ,int m , vector<vector<int>>& grid){
        if(nx >=0 && nx< n && ny>=0 && ny<m && grid[nx][ny]==1) return true;
        else return false;
    }
    
    void dfs(int i,int j ,int n ,int m , vector<vector<int>>& grid){
        grid[i][j]=0;
        
        int ax[4]={1,-1,0,0};
        int ay[4]={0,0,1,-1};
        
        for(int k=0;k<4;k++){
            int nx=i+ax[k];
            int ny=j+ay[k];
            if(isValid(nx,ny,n,m,grid)){
                dfs(nx,ny,n,m,grid);
            }
        }
    }
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        
        // row traverse
        for(int i=0;i<n;i++){
            int j=0;
            if(grid[i][j] == 1){
                dfs(i,j,n,m,grid);
            }
            
            j=m-1;
              if(grid[i][j] == 1){
                dfs(i,j,n,m,grid);
            }
        }
        
        // coloumn traverse
         for(int j=0;j<m;j++){
            int i=0;
            if(grid[i][j] == 1){
                dfs(i,j,n,m,grid);
            }
            
            i=n-1;
              if(grid[i][j] == 1){
                dfs(i,j,n,m,grid);
            }
        }
        
        
        
        return count(grid);
        
    }
};