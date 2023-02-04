 Approach 1:-
---------------
   
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> ans;
        for(auto it: nums1){
            ans.push_back(it);
        }
        for(auto it: nums2){
            ans.push_back(it);
        }
        sort(ans.begin(),ans.end());

        if(ans.size()%2==0){
            int mid = ans.size()/2;
            return (ans[mid]+ans[mid-1])/2;
        }else{
            int mid = (ans.size()-1)/2;
            return ans[mid];
        }
       return -1;
    }
};

 Approach 2:-
---------------
   
