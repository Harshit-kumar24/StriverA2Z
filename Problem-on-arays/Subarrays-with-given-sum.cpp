 Approach 1:-
--------------
   
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans =0;
        
        for(int i =0;i<nums.size();i++){
            int csum =0;
            for(int j =i;j<nums.size();j++){
                    csum+=nums[i];
                    if(csum==k){
                        ans++;
                    }
            }
        }
        return ans;
    }
};

 Approach 2:-
--------------
   
