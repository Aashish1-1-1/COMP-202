#include <iostream>

void InsertionSort(int arr[],int n){
	for(int i=1;i<n;++i){
		int key=arr[i];
		int j=i-1;
		while(j>=0&&arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}
int main(){
	int arr[]={2,1,2,3,1,1};
	InsertionSort(arr,sizeof(arr)/sizeof(int));
	for(int i:arr){
		std::cout<<i;
	}
}
