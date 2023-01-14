 Approach-1
------------

vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    int start = 0;
    int end = n-1;
    int ans1 = -1;
    while(start<=end){
        int mid =start+(end-start)/2;
        
        if(arr[mid]==x){
            ans1 = mid;
            end = mid-1;
        }
        else if(arr[mid]>x){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
        // part-2
        
    start = 0;
    end = n-1;
    int ans2 = -1;
    while(start<=end){
        int mid =start+(end-start)/2;
        
        if(arr[mid]==x){
            ans2 = mid;
            start = mid+1;
        }
        else if(arr[mid]>x){
            end = mid-1;
        }else{
            start = mid+1;
        }
        
    }
    ans.push_back(ans1);
    ans.push_back(ans2);
    
    return ans;
}