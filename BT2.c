#include<stdio.h>

int main(){
	int arr[5]={4,1,8,5,2};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[i]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
}