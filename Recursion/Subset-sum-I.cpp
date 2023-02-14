 Approach 1:-
--------------
   
class Solution
{
public:
    void f(int index,int sum,vector<int>& arr,int n,vector<int>& ans){
       
       if(index==n){
           ans.push_back(sum);
           return;
       }
       
       f(index+1,sum+arr[index],arr,n,ans);
       f(index+1,sum,arr,n,ans);
    }

    vector<int> subsetSums(vector<int> arr, int N) {
      vector<int> ans;
      f(0,0,arr,N,ans);
      sort(ans.begin(),ans.end());
      return ans;
     
    }
};
