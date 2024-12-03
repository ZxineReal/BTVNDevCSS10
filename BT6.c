#include<stdio.h>

int main(){
	int arr[8]={1,4,3,6,7,2,3,4};
	int item;
	int count=0;
	printf("Moi ban nhap gia tri can tim kiem ");
	scanf("%d",&item);
	int length=sizeof(arr)/sizeof(arr[0]);
	int arr2[100];
	
	for(int i=0;i<length;i++){
		if(arr[i]==item){
			count++;
			arr2[i]=i;
			printf("Vi tri cua %d trong mang la: %d\n",item,arr2[i]);
			
	}
}
		
	if(count==0){
	printf("Khong tim thay phan tu %d trong mang\n",item);
	}                                                     
}