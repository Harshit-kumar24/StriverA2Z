 Approach-1:-
--------------
   
class Solution{
  public:

    int majorityElement(int a[], int size){
        int ans = -1;
        unordered_map<int,int> m;
        
        for(int i =0;i<size;i++){
            m[a[i]]++;
        }
        for(auto it: m){
            if(it.second>size/2){
                ans = it.first;        
            }
        }
        
        return ans;
    }
};

 Appraoch 2:-
--------------
   
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};
