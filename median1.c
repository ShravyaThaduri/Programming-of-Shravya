#include<stdio.h>
void main() {
	int temp,i,j,m,n,a[10],b[10],r,merge[20];
	float median;
	printf("Enter m and n values : ");
	scanf("%d%d",&m,&n);
	printf("enter a elements : ");
	for(i=0;i<m;i++) {
			scanf("%d",&a[i]);
			merge[i]=a[i];
	}
	printf("enter b elements :");
	int k;
	k=i;
	for(i=0;i<n;i++) {
		scanf("%d",&b[i]);
		merge[k]=b[i];
		k++;
	}
	printf("The merged elements are : ");
	for(i=0;i<m+n;i++) {
		printf("%d \n",merge[i]);
	}
	printf("After sorting \n");
	r=m+n;
	for(i=0;i<r;i++) {
		for(j=i+1;j<r;j++) {
			if(merge[i]>merge[j]) {
			temp=merge[i];
			merge[i]=merge[j];
			merge[j]=temp;
		}
		}
		printf("%d ",merge[i]);
	}
	if(r%2==0) {
		 median=(merge[(r-2)/2]+merge[r/2])/2.0;
	     printf("median is : %f",median);
	}
	else {
		median=merge[r/2];
		printf("Median is %f",median);
   }   
}
