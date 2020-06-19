//In an array of integers, return indices of the two numbers such that they add up to get a targeted value.
#include<stdio.h>
void main() {
	int a[10],n,i,j,target;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	printf("Enter the target value : ");
	scanf("%d",&target);
	printf("The indices are : "); //to find the indices 
	for(i=0;i<n;i++) {
		for(j=i+1;i<n;j++) {
			if(a[i]+a[j]==target) {
				printf("%d %d",i,j);
			}
		}
	}
}
