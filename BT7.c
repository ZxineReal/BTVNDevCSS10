#include<stdio.h>

int main(){
	int arr[100][100];
	int row,col;
	printf("Moi ban nhap vao so dong: \t");
	scanf("%d",&row);
	printf("\nMoi ban nhap vao so cot: \t");
	scanf("%d",&col);
	
	for(int i=0;i<row;i++){
	  	for(int j=0;j<col;j++){
	  		printf("Moi ban nhap phan tu arr[%d][%d]\t",i,j);
	  		scanf("%d",&arr[i][j]);
		  }
	}
	
	for(int i=0;i<row;i++){
		for(int k=0;k<col-1;k++){
			for(int j=0;j<col-k-1;j++){
			if(arr[i][j]>arr[i][j+1]){
				int temp=arr[i][j];
				arr[i][j]=arr[i][j+1];
				arr[i][j+1]=temp;
			}
		}
	}
}
	for(int i=0;i<row;i++){
		for(int j=0; j<col;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}