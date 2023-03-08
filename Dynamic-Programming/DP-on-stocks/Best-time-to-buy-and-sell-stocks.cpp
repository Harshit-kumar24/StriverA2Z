 Approach 1:-
--------------
   
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mi = prices[0];
        int ans = INT_MIN;
        for(int i =0 ;i<n;i++){
            if(mi>prices[i]){
                mi = prices[i];
            }
                ans =max(ans,prices[i]-mi);
            
        }
        return ans;
    }
};
