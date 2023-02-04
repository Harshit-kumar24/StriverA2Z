 Approach 1:-
---------------
   
class Solution {
public:

bool possible(vector<int>& nums,int k,int dist){
        int cnt =1;
        int curr = nums[0];
        for(int i =1;i<nums.size();i++){
                if(abs(nums[i]-curr)>=dist){
                    cnt++;
                    curr = nums[i];
                }
                if(k==cnt) return true;
        }
        return false;
}

    int solve(int n, int k, vector<int> &stalls) {
        if(k>stalls.size()) return -1;
        
        int mi = *min_element(stalls.begin(),stalls.end());
        int ma = *max_element(stalls.begin(),stalls.end());
        
        int start = 1;
        int end = ma-mi;
        int ans = -1;
        
        sort(stalls.begin(),stalls.end());
        
        while(start<=end){
            int mid = start+(end-start)/2;
            
            if(possible(stalls,k,mid)){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid-1;;
            }
        }
        return ans;
    }
};
