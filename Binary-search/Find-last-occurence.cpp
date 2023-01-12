#include<bits/stdc++.h>
using namespace std;

int f(int arr[],int start,int end,int key){
    int ans = -1;
    while(start<=end){
        int mid =start+(end-start)/2;

        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,1,2,2,2,2,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int key = 2;
    int ans = f(arr,0,n-1,key);
    cout<<"The upper bound is "<<ans<<endl;
}