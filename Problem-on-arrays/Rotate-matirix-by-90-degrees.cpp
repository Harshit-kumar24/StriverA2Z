class Solution
{   
  public:
  
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        for(int i =0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        for(int i =0;i<n;i++){
            for(int j =0;j<n;j++){
                if(i>j){
               int temp = matrix[i][j];
               matrix[i][j] = matrix[j][i];
               matrix[j][i] = temp;
            }
        }
    }
  }
};
