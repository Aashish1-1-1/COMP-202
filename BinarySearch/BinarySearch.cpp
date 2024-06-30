#include <iostream>

bool BinarySearch(int arr[],int left,int right,int target){
	if(left<right){
		int mid= left + (right-left)/2;
		if(arr[mid]==target){
			std::cout<<mid;
			return true;
		}
		else if(target>arr[mid]){
			return BinarySearch(arr,mid+1,right,target);
		}
		else{
			return BinarySearch(arr,left,mid-1,target);
		}
	}
	return false;
}

int main(){
	int arr[]={1,2,1,5,2,4,3};
	int n=sizeof(arr)/sizeof(int);
	std::cout<<BinarySearch(arr,0,n,5);
}
