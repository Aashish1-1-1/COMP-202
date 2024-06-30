#include <iostream>
void swapc(int &a,int &b){
	a=a^b;
	b=a^b;
	a=a^b;
}
void heapify(int arr[],int n,int i){
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && arr[l]>arr[largest]){
		largest=l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest=r;
	}
	if(largest!=i){
		swapc(arr[i],arr[largest]);
		heapify(arr,n,largest);
	}
}
void build_heap(int arr[],int n){
	for (int i = n / 2 - 1; i >= 0;--i)
       		 heapify(arr, n, i);
}
void HeapSort(int arr[],int n){
	build_heap(arr,n);
	for(int i=n-1;i>=0;--i){
		swapc(arr[i],arr[0]);
		heapify(arr,i,0);
	}
}

int main(){
	int arr[]={2,1,2,3,1,1};
	for(int i:arr){
		std::cout<<i;
	}
	std::cout<<std::endl;
	HeapSort(arr,sizeof(arr)/sizeof(int));
	for(int i:arr){
		std::cout<<i;
	}
}
