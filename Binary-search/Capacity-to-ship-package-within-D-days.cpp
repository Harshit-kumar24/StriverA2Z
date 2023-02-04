 Approach 1:-
---------------
   
class Solution {
public:
    bool possible(vector<int>& nums,int days,int cap){
         int sum =0;
        int ans =1;

        for(int i =0;i<nums.size();i++){
            sum+=nums[i];
             if(sum>cap){
                ans++;
                sum = nums[i];
            }
        }
        if(ans>days) return false;
        return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(),weights.end());
        int end = int(accumulate(weights.begin(),weights.end(),0));

        int ans = -1;
        while(start<=end){
            int mid = start+(end-start)/2;

            if(possible(weights,days,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};
