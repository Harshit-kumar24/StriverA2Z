 Approach 1:-
--------------
   
class Solution {
  public:
    void f(int ind,int target,vector<int>& ds,vector<vector<int>>& ans,vector<int>& nums){
        //base case
        if(ind==nums.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        
        //conditions
        if(nums[ind]<=target){
            ds.push_back(nums[ind]);
            f(ind,target-nums[ind],ds,ans,nums);   
            ds.pop_back();
        }
        f(ind+1,target,ds,ans,nums);
        
        
    }
    vector<vector<int> > combinationSum(vector<int> &A, int B) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(A.begin(),A.end());
        
          A.erase(unique(A.begin(),A.end()),A.end());
        f(0,B,ds,ans,A);
        return ans;
    }
};
