 Approach 1:-
---------------

class Solution {
public:
    int search(vector<int>& nums, int target) {
       int start =0;
       int end = nums.size()-1;

       while(start<=end){
           int mid = start+(end-start)/2;

           if(nums[mid]==target){
               return mid;
           }
           else if(nums[mid]>target){
               end = mid-1;
           }else{
               start = mid+1;
           }
       }
       return -1;
    }
};

 Approach 2:-
--------------
//using recursion

class Solution {
public:
    int f(vector<int> nums,int start,int end,int target){
    
       while(start<=end){
           int mid = start+(end-start)/2;

           if(nums[mid]==target){
               return mid;
           }
           else if(nums[mid]>target){
               f(nums,start,mid-1,target);
           }else{
               f(nums,mid+1,end,target);
           }
       }
       return -1;
    }

    int search(vector<int>& nums, int target) {
       int start =0;
       int end = nums.size()-1;
        return f(nums,start,end,target);
    
    }
};
