 Approach 1:-
--------------
   
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      next_permutation(nums.begin(),nums.end());
    }
};

 Approach 2:-
--------------
   
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n = nums.size(), k, l;
    	for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }
    	if (k < 0) {
    	    reverse(nums.begin(), nums.end());
            return;
    	} else {
    	    for (l = n - 1; l > k; l--) {
                if (nums[l] > nums[k]) {
                    break;
                }
            } 
    	    swap(nums[k], nums[l]);
    	    reverse(nums.begin() + k + 1, nums.end());
        }
    }
};
   
