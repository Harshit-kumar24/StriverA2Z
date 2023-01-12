 Approach 1:-
--------------
   
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i =0;i<n;i++){
            sum += nums[i];
        }
        int ans = (n*(n+1)/2)-sum;
        return ans;
    }
};

Approach 2:-
-------------
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size()+1;
        vector<int> freq(n,0);
        for(int i =0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int ans = -1;
        for(int i =0;i<n;i++){
            if(freq[i]==0){
                ans = i;
                break;
            }
        }
        return ans;
        }
};
