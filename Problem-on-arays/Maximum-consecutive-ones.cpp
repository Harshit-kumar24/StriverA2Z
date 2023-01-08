 Approach 1:-
--------------
   
 //with a condition to flip the zeroes to ones  
class Solution{
public:
    int findZeroes(int arr[], int n, int m) {
        int ans =0;
        
        for(int i =0;i<n;i++){
            int cnt =0;
            for(int j = i;j<n;j++){
                if(arr[j]==0){
                    cnt++;
                }
                if(cnt<=m){
                    ans = max(ans,j-i+1);
                }
            }
        }
        return ans;
    }  
};

 Approach 2:-
---------------
   
 //without the condition 
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int csum =0;
        int msum = INT_MIN;

        for(int i =0;i<nums.size();i++){
            csum +=nums[i];
            msum = max(csum,msum);
            if(nums[i]==0){
                csum =0;
            }
        }
        return msum;
    }
};
