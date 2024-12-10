#include <stdio.h>
void findMaxValue(int arr[], int size){
	int maxValue=arr[0];
	for(int i=0;i<size;i++){
		if(arr[i]>maxValue){
			maxValue=arr[i];
		}
	}
	printf("phan tu lon nhat trong mang la: %d\n",maxValue);
}
int main(){
	int num[]={18,3,1,8,6};
	int size=sizeof(num)/sizeof(int);
	findMaxValue(num,size);
	return 0;
}

