class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
       if(n==1) return 0;
       if(n==2) return (nums[0]>nums[1])?0:1;

       int start =0;
       int end = nums.size()-1;

       while(start<=end){
           int mid = start+(end-start)/2;

        if(mid==0) return (nums[0]>nums[1])?0:1;
        if(mid==n-1) return (nums[n-1]>nums[n-2])?n-1:n-2;

        if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
            return mid;
        }
        else if(nums[mid-1]>nums[mid]){
            end = mid-1;
        }else{
            start = mid+1;
        }
       }
        return end;
   
    }
};