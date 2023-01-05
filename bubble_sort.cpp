#include<bits/stdc++.h>
using namespace std;

void f(int arr[],int n){
	
	for(int i =1;i<n;i++){
		for(int j =0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
}


int main(){
	int arr[] = {1,4,3,2,5,6,8,7,0,9};
	int n = sizeof(arr)/sizeof(int);
	f(arr,n);

	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
