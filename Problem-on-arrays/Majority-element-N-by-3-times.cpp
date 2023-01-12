 Approach 1:-
--------------

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
            unordered_map<int,int> m;
            int n = nums.size();
            for(auto it: nums){
                m[it]++;
            }

            for(auto it: m){
                if(it.second>n/3){
                    ans.push_back(it.first);
                }
            }
       return ans;
  
    }
};

 Approach-2:-
--------------

vector < int > majorityElement(int arr[], int n) {
  vector < int > ans;
  for (int i = 0; i < n; i++) {
    int cnt = 1;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] == arr[i])
        cnt++;
    }

    if (cnt > (n / 3)) 
      ans.push_back(arr[i]);
  }

  return ans;
}