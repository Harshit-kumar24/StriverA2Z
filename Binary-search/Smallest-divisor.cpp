 Approach 1:-
---------------
   
class Solution {
  public:
    bool possible(vector<int>& nums,int k,int d){
        long sum =0;
        for(int i =0;i<nums.size();i++){
            sum+= ceil(float(nums[i])/float(d));
        }
        if(sum<=k) return true;
        return false;
    }
  
  
    int smallestDivisor(vector<int>& nums, int K) {
        int start =1;
        int end = *max_element(nums.begin(),nums.end());
        int ans = -1;
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(possible(nums,K,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start =mid+1;
            }
            
        }
        return ans;
        
    }
};
