#include <iostream>
void swapc(int &a,int &b){
	a=a^b;
	b=a^b;
	a=a^b;
}
void SelectionSort(int arr[],int n){
	for(int i=0;i<n-1;++i){
		int min_index=i;
	 	for(int j=i+1;j<n;++j){
			if(arr[j]<arr[min_index]){
				min_index=j;
			}
		}
		swapc(arr[min_index],arr[i]);
	}
}
int main(){
	int arr[]={2,1,2,3,1,1};
	SelectionSort(arr,sizeof(arr)/sizeof(int));
	for(int i:arr){
		std::cout<<i;
	}
}
