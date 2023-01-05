 Approach 1:-
---------------
   
class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        if(n==1) return;
        k = k%n;
        int shiftdist = n-k;
        reverse(nums.begin(),nums.begin()+shiftdist);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
                 
    }
};
