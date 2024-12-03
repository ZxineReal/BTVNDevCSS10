#include<stdio.h>

int main(){
	int arr[5]={4,1,8,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n-1;i++){
		int maxIndex=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[maxIndex]){
				maxIndex=j;
			}
		}
		int temp=arr[maxIndex];
		arr[maxIndex]=arr[i];
		arr[i]=temp;
		
	}
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}