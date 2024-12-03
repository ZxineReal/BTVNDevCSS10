#include<stdio.h>

int main(){
	int arr[5]={1,1,2,4,5};
	int num;
	int index=0;
	printf("Moi ban nhap vao mot so:\n");
	scanf("%d",&num);
	
	for(int i=0;i<5;i++){
		index++;
		if(arr[i]==num){
			printf("Vi tri cua so do trong mang la: %d\n",index);
	}
}
}