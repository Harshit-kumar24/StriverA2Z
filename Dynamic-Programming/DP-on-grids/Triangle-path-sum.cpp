 Approach 1:-
---------------
   
class Solution {
  public:
  
  int f(int i,int j,vector<vector<int>>& nums,vector<vector<int>>& dp){
      if(i<0 || j<0 || i>=nums.size() || j>i) return 0;
      
      if(i==nums.size()-1) return nums[nums.size()-1][j];
      
      if(dp[i][j]!= -1) return dp[i][j];
      
      int a = nums[i][j]+f(i+1,j,nums,dp);
      int b = nums[i][j]+f(i+1,j+1,nums,dp);
      
      return dp[i][j] = min(a,b);
  }

    int minimizeSum(int n, vector<vector<int>>& triangle) {
         vector<vector<int>> dp(n,vector<int>(n,-1));
        return f(0,0,triangle,dp);
        
    }
};
   
 Approach 2:-
--------------
   
class Solution {
  public:
    int minimizeSum(int n, vector<vector<int>>& triangle) {
  
        vector<vector<int>> dp(n,vector<int>(n,0));
        
        for(int j =0;j<n;j++){
            dp[n-1][j] = triangle[n-1][j];
        }
        
        for(int i = n-2;i>=0;i--){
            for(int j = i;j>=0;j--){
                
                int a = triangle[i][j]+dp[i+1][j];
                int b = triangle[i][j]+dp[i+1][j+1];
                
                dp[i][j] = min(a,b);
            }
        }
        return dp[0][0];
     
    }
};
