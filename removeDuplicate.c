/*Given a sorted array nums, remove the duplicates in-place such that each 
element appear only once and return the new length.*/
#include<stdio.h>
void main() {
	int i,j,a[10],n,temp;
	printf("Enter n value : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	printf("After sorting the elements : \n");
	//performing sorting operation
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++) {
			if(a[i]>a[j]) {
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
		printf("%d ",a[i]);
	}
	//to remove the duplicate elements
	i=0;
	for(j=1;j<n;j++) {
		if(a[j]!=a[i]) {
			i++;
			a[i]=a[j];
		}
			
	}
printf("\nlength of the array after removing the duplicate elements is : %d",i+1);
}
