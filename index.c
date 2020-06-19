
#include<stdio.h>
int main() {
	int arr[10],n,temp;
	int i,j;
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(arr[i]>arr[j]) {
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		printf("%d ",arr[i]);
	}
	printf("\n");
	int target;
	printf("Enter the target value : ");
	scanf("%d",&target);
	printf("\nTarget indice are : \n");
	
	for(i=0;i<n;i++) {
		if(arr[i]==target)
		{
			printf("%d ",i);
		}      
	}
}
