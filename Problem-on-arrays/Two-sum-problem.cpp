 Approach 1:-
--------------
	 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> ans;
        for(int i =0;i<nums.size();i++){
            for(int j =0;j<nums.size();j++){
                if(i==j) continue;
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                }
            }
            if(ans.size()!=0) break;
        }
        return ans;
    }
};

 Approach 2:-
---------------
   
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans,num;
        num = nums;
        sort(num.begin(),num.end());

        int start = 0;
        int end = nums.size()-1;
        int e1,e2;

        while(start<end){
            if(num[start]+num[end]==target){
                e1 = num[start];
                e2 = num[end];
                break;
            }else if(nums[start]+num[end]>target){
                    end--;
            }else if(num[start]+num[end]<target){
                    start++;
            }
        }
        for(int i =0;i<nums.size();i++){
            if(e1==nums[i]){
                ans.emplace_back(i);
           } else if(e2==nums[i]){
                ans.emplace_back(i);
            }
         
        }  
        return ans;
    }
};

 Approach 3:-
--------------
   
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;

        for(int i =0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end()){ 

                    ans.emplace_back(i);
                    ans.emplace_back(m[target-nums[i]]);
                    break;
            }
            m[nums[i]] = i;
        }
        return ans;

        
    }
};
	 
