 Approach 1:-
--------------
   
class Solution {
  public:
  void f(int ind,int size,int target,vector<int>& ds,vector<int>& nums, vector<vector<int>>& ans){
        if(ind==nums.size()){
            if(target==0 && size==0){
                ans.push_back(ds);
            }
            return;
        }
      if(nums[ind]<=target && size>0){
          ds.push_back(nums[ind]);
          f(ind+1,size-1,target-nums[ind],ds,nums,ans);
          ds.pop_back();
      }
      f(ind+1,size,target,ds,nums,ans);
      
  }
    vector<vector<int>> combinationSum(int K, int N) {
        vector<vector<int>> ans;
        vector<int> ds,nums;
        for(int i =1;i<10;i++){
            nums.push_back(i);
        }
        f(0,K,N,ds,nums,ans);
        return ans;
    }
};
