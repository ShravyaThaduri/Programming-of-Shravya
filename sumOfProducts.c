//Program to find the product of  every element with its next consecutive integer and return the sum of all these products
#include<stdio.h>
int main() {
	int n,a[50];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(i=0;i<n;i++) {
		sum=sum+(a[i]*(a[i]+1));
	}
	printf("%d",sum);
	return 0;
}
