/*Given an array nums and a value val, remove all instances of that 
value in-place and return the new length.*/
#include<stdio.h>
void main() {
	int i,j,a[10],n,val;
	printf("Enter n value : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	printf("val = ");
	scanf("%d",&val);
	i=0;
	for(j=1;j<n;j++) {
		if(a[j]!=val) {
			i++;
			a[i]=a[j];
		}	
	}
printf("\nlength is : %d",i+1);
}
