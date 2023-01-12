 Approach 1:-
--------------

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans,pos,neg;

        for(int i =0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }else{
                pos.push_back(nums[i]);
            }
        }
        bool check = false;
        int i =0;
        int j =0;
        while(ans.size()!=nums.size()){
            if(!check){
                ans.push_back(pos[i]);
                i++;
                check = !check;
            }else{
                ans.push_back(neg[j]);
                j++;
                check = !check;
            }
        }
        return ans;

    }
};

 Approach 2:-
--------------
   
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int k =0;
        int j = 1;
        
        for(int i =0;i<nums.size();i++){
            if(nums[i]<0){
                ans[j] = nums[i];
                j+=2;
            }else{
                ans[k] = nums[i];
                k+=2;
            }
        }
       return ans;
    }
};
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
