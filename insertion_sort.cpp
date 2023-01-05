#include<bits/stdc++.h>
using namespace std;

void f(int arr[],int n){
		
	for(int i =0;i<n;i++){
		int current = arr[i];
		int j = i-1;

		while(j>=0  && arr[j]>current){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = current;
	}

}


int main(){
		int arr[] = {1,3,2,5,4,7,6,9,8,0};
		int n = sizeof(arr)/sizeof(int);

		f(arr,n);

		for(int i =0;i<n;i++){
			cout<<arr[i]<<" ";
		}

	return 0;
}
