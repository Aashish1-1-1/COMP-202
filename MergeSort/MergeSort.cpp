#include <iostream>
void Merge(int arr[],int l,int m,int r){
    int n1 = m-l+1;
    int n2 = r-m;
 
    int L[n1];
    int R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    int i,j,k;
    i=j=0;
    k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i=i+1;
        }
        else{
            arr[k] = R[j];
            j=j+1;
        }
        k=k+1;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[],int l,int r){
    if (l<r){
    	int mid = l + (r - l) / 2;
   	MergeSort(arr,l,mid);
    	MergeSort(arr,mid+1,r);
    	Merge(arr, l ,mid, r);
    }
    return;
}
int main(){
	int arr[]={2,1,2,3,1,1};
	MergeSort(arr,0,sizeof(arr)/sizeof(int));
	for(int i:arr){
		std::cout<<i;
	}
}
