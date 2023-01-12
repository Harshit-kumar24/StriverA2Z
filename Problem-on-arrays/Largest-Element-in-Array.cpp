 Approach 1:-
--------------    

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
      int ma = INT_MIN;
      for(int i =0;i<n;i++){
          if(arr[i]>ma){
              ma = arr[i];
          }
      }
      return ma;
    }
};

 Approach 2:-
-------------- 
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        sort(arr.begin(),arr.end());
        return arr[n-1];
    }
};
