 Approach 1:-
---------------

class Solution {
public:
    int beautySum(string s) {
        int ans = 0;

        for(int i=0; i<s.size(); i++) {
        
            unordered_map<char, int> m;
        
            for(int j=i; j<s.size(); j++) {
                m[s[j]]++;
                int mn = INT_MAX, mx = INT_MIN;
                for(auto i : m){
                     mn = min(mn, i.second);
                     mx = max(mx,i.second);
                }
                ans += mx - mn;
            }
        }
        return ans;
    }
};

 Approach 2:-
--------------

