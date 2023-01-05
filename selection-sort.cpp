#include<bits/stdc++.h>
using namespace std;

void f(int arr[],int n){
	
	for(int i =0;i<n-1;i++){
		for(int j =i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main(){
	int arr[] = {1,3,2,4,5,7,6,8,0,9};
	int n = sizeof(arr)/sizeof(int);
	f(arr,n);
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}	
}
