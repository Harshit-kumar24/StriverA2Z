 Approach 1:-
--------------

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int ans = 0;
        for(int i =0;i<n;i++){
            int sum =0;
            for(int j = i;j<n;j++){
                sum+=A[j];
                if(sum==0){
                    ans = max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};

 Approach 2:-
--------------

int maxLen(int A[], int n){
    
    unordered_map<int,int> mpp; 
    int maxi = 0;
    int sum = 0; 
    for(int i = 0;i<n;i++) {
        sum += A[i]; 
        if(sum == 0) {
            maxi = i + 1; 
        }
        else {
            if(mpp.find(sum) != mpp.end()) {
                maxi = max(maxi, i - mpp[sum]); 
            }
            else {
                mpp[sum] = i;
            }
        }   
    }

    return maxi; 
}

