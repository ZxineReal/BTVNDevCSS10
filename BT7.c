#include<stdio.h>

int main(){
	int arr[3][3]={
	{1,5,3},
	{4,1,7},
	{5,8,1}
	};

	
	for(int i=0;i<3;i++){
		for(int k=0;k<3-1;k++){
			for(int j=0;j<3-k-1;j++){
			if(arr[i][j]>arr[i][j+1]){
				int temp=arr[i][j];
				arr[i][j]=arr[i][j+1];
				arr[i][j+1]=temp;
			}
		}
	}
}
	for(int i=0;i<3;i++){
		for(int j=0; j<3;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}