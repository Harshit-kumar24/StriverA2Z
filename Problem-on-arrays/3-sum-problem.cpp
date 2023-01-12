 Approach 1:-
---------------

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n = nums.size();

        for(int i =0;i<n-2;i++){
            for(int j = i+1;j<n-1;j++){
                for(int k =j+1;k<n;k++){
                    temp.clear();
                    if(nums[i]+nums[j]+nums[k]==0){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                    }
                }
                if(temp.size()!=0){
                    ans.push_back(temp);
                }
            }
        }
       return ans;
    }
};

 Approach 2:-
--------------

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();

        for(int i =0;i<n-2;i++){
            
            if(( i>0 && nums[i]!=nums[i-1]) || i==0){
                    int start = i+1,  end = n-1, sum =0-nums[i];

            while(start<end){
                if(nums[start]+nums[end]==sum){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[start]);
                    temp.push_back(nums[end]);
                    ans.push_back(temp);
                  
                while(start<end && nums[start]==nums[start+1]) start++;
                while(start<end && nums[end]==nums[end-1]) end--;
                start++;
                end--;
                }
                else if(nums[start]+nums[end]>sum){
                    end--;
                }else{
                    start++;
                }
            }
        }
    }
        return ans;
    }
};

