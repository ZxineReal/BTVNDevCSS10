#include<stdio.h>

int main(){
	int arr[8]={1,4,6,7,11,14,16,19};
	int item;
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("Moi ban nhap vao gia tri can tim kiem: \n");
	scanf("%d",&item);
	int start=0;
	int end=length-1;
	int mid;
	int flag=-1;
	int arr2[100];
	
	while(start<=end){
		mid = (start+end) /2;
		if(arr[mid]>item){
			end=mid-1;
		}else if(arr[mid]<item){
			start=mid+1;
		}else{
			flag=1;
			
			printf("Vi tri cua phan tu %d la: %d ",item,mid);
			break;
		}
	}
	if(flag==-1){
		printf("Phan tu %d khong ton tai trong mang",item);
	}
}