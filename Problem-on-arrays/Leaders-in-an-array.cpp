 Approach 1:-
--------------
   
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        
        vector<int> ans;
        for(int i =0;i<n;i++){
            int cnt =0;
            for(int j =i+1;j<n;j++){
                if(arr[i]<arr[j]){
                    cnt++;
                }
            }
            if(cnt==0){
                ans.push_back(arr[i]);
            }
        }
        return ans;
        
    }
};

 Approach 2:-
--------------
   
class Solution{
   
    public:
    vector<int> leaders(int a[], int n){
       
       vector<int> ans;
        int max = INT_MIN;
        for (int i=n-1; i>=0; i--) {
            if (a[i] >= max) {
                ans.emplace(ans.begin(), a[i]);
                max = a[i];
            }
        }
        return ans;
    }
    
};
   
