#include <iostream>

bool  SequentialSort(int arr[],int n,int target){
	for(int i=0;i<n;++i){
		if(arr[i]==target){
			return true;
		}
	}
	return false;
}

int main(){
	int arr[]={1,2,1,5,2,4,3};
	std::cout<<SequentialSort(arr,sizeof(arr)/sizeof(int),0);
}
