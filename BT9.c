#include<stdio.h>

int main(){
	int arr[3][3]={
	{5,3,8},
	{6,2,5},
	{1,7,9}
	};
	int n=sizeof(arr)/sizeof(arr[0]);
	int num[n];
	
	for(int i=0;i<n;i++){
			num[i]=arr[i][i];
		}
	for(int i=0;i<n;i++){
		printf("Cac phan tu tren duong cheo chinh la: %d\n",num[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(num[j]>num[i]){
				int temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	printf("Cac phan tu sau khi duoc sap xep la: \n");
	for(int i=0;i<n;i++){
		printf("%d\t",num[i]);
	}
}
	


