class Solution
{
    public:
        int diagonalSum(vector<vector < int>> &mat)
        {
             int r=mat.size();
              int sum=0;
             for(int i=0;i<r;i++){
                 if(i != r-1-i) sum+=mat[i][i]+mat[i][r-i-1];
                 else sum+=mat[i][i];
             } 
           return sum;
        };
    
};  