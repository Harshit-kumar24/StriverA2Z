 Approach 1:-
--------------
   
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = INT_MIN;

        for(int i =0;i<prices.size()-1;i++){
            int cdiff = 0;
            for(int j = i+1;j<prices.size();j++){
                    ans = max(ans,prices[j]-prices[i]);
            }
        }
        if(ans<0) ans =0;
        return ans;
    }
};

 Approach 2:-
--------------
   
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int ans =0;
       int mi = INT_MAX;
       int n = prices.size();
       
       for(int i =0;i<n;i++){
           mi = min(mi,prices[i]);
           ans = max(ans,prices[i]-mi);
       }
       return ans;
    }
};
