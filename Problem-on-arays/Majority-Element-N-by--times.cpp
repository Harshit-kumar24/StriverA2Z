 Approach 1:-
--------------
   
class Solution {
  public:
    vector<int> Solve(int n, vector<int>& nums) {
         vector<int> ans;
            map<int,int> m;
         
         for(int i =0;i<n;i++){
             m[nums[i]]++;
             }
             
             for(auto it: m){
                 if(it.second>n/3){
                     ans.push_back(it.first);
                 }
             }
             if(ans.size()==0) ans.push_back(-1);
             return ans;
    }
};

 Approach 2:-
--------------
   
int n = nums.size();
        vector<int> ans;
        set<int> s;
         
         for(int i =0;i<n;i++){
             int cnt =1;
             for(int j =i+1;j<n;j++){
                 if(nums[i]==nums[j]){
                     cnt++;
                 }
             }
              if(cnt>n/3){
                     s.insert(nums[i]);
                 }
         }

         for(auto it: s){
             ans.push_back(it);
         }
         return ans;
  
    }
};

 
   
