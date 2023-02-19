 Approach 1:-
--------------
   
class Solution {
  public:
  
  int f(int n,vector<int>& height,vector<int>& dp){
      if(n==0){
          return 0;
      }
      if(dp[n]!=-1) return dp[n];
      int jumpTwo = INT_MAX;
      int jumpOne = f(n-1,height,dp)+abs(height[n]-height[n-1]);
      if(n>1)  jumpTwo = f(n-2,height,dp)+abs(height[n]-height[n-2]);
      
      return dp[n] =  min(jumpOne,jumpTwo);
  }
  
  
    int minimumEnergy(vector<int>& height, int n) {
        vector<int> dp(n,-1);
       return f(n-1,height,dp);
       
        
       
       
    }
};

 Approach 2:-
--------------
   
class Solution {
  public:
  
    int minimumEnergy(vector<int>& height, int n) {
      
        vector<int> dp(n,0);
        dp[0] =0;
       int jumpTwo = INT_MAX;
       for(int i =1;i<n;i++){
              int jumpOne = dp[i-1]+abs(height[i]-height[i-1]);
        if(i>1) jumpTwo = dp[i-2]+abs(height[i]-height[i-2]);
        
        dp[i] = min(jumpOne,jumpTwo);
       }
       
       return dp[n-1];
       
    }
};

 Approach 3:-
--------------
   
class Solution {
  public:
  
    int minimumEnergy(vector<int>& height, int n) {
      
       int prev1 = 0;
       int prev2 =0;
       for(int i =1;i<n;i++){
           
           int jumpTwo = INT_MAX;
              int jumpOne = prev2+abs(height[i]-height[i-1]);
            if(i>1) jumpTwo = prev1+abs(height[i]-height[i-2]);
        
        int curr = min(jumpOne,jumpTwo);
        prev1 = prev2;
        prev2 = curr;
       }
       
       return prev2;
       
    }
};
