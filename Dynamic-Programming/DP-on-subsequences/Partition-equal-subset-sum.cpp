 Approach 1:-
--------------
   
class Solution {
public:
bool f(int ind,int target,vector<int>& nums,vector<vector<int>>& dp){
    if(target==0) return true;

    if(ind==0){
            if(nums[0]==target){
                return true;
            }
        return false;
    }
    if(dp[ind][target]!=-1) return dp[ind][target];
    int npick = f(ind-1,target,nums,dp);
    int pick =0;
    if(nums[ind]<=target){
        pick = f(ind-1,target-nums[ind],nums,dp);
    }
    return dp[ind][target]= pick || npick;
}
    bool canPartition(vector<int>& nums) {
       int sum =0;
       int n = nums.size();

       for(int i =0;i<n;i++){
           sum+=nums[i];
       }

       if(sum%2!=0) return false;

       int check = sum/2;
       vector<vector<int>> dp(n,vector<int>(check+1,-1));
       return f(n-1,check,nums,dp);
        
    }
};

 Approach 2:-
--------------
   
class Solution {
public:
    bool canPartition(vector<int>& nums) {
       int sum =0;
       int n = nums.size();

       for(int i =0;i<n;i++){
           sum+=nums[i];
       }

       if(sum%2!=0) return false;

       int check = sum/2;
       vector<vector<int>> dp(n,vector<int>(check+1,0));
      
      for(int i =0;i<n;i++){
          dp[i][0] = 1;
      }
      if(nums[0]<=check){
            dp[0][nums[0]] = true;
        }

      for(int i = 1;i<n;i++){
          for(int j = 1;j<=check;j++){

              int npick = dp[i-1][j];
              int pick = 0;
              if(nums[i]<=j){
                    pick = dp[i-1][j-nums[i]];
              }

              dp[i][j] = pick || npick;
          }
      }

      return dp[n-1][check];

        
    }
};
