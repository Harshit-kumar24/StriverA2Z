 Approach 1:-
--------------
   
class Solution {
  public:
  void f(int ind,vector<int>& nums,vector<int>& ds,set<vector<int>>& s,int target){
      if(ind==nums.size()){
          if(target==0){
              s.insert(ds);
          }
          return;
      }
      
      if(nums[ind]<=target){
      ds.push_back(nums[ind]);
      f(ind+1,nums,ds,s,target-nums[ind]);
      ds.pop_back();
      }
      f(ind+1,nums,ds,s,target);
      
      
  }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        vector<vector<int>> ans;
        set<vector<int>> s;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        f(0,candidates,ds,s,target);
        for(auto it: s){
            ans.push_back(it);
        }
        return ans;
    }
};
