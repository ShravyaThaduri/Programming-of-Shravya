//c code to find uncommon elements from two arrays and sum of uncommon elements
#include<stdio.h>
int main()  {
	int n,a1[10],a2[10],i,c[10],j,flag=0,sum=0;
	printf("Enter the size of arrays : ");
	scanf("%d",&n);
	printf("Enter the elements of array-1 : ");
	for(i=0;i<n;i++) {
		scanf("%d",&a1[i]);
		c[i]=a1[i];
	}
	int k;
	k=i;
	printf("Enter the elements of array-2 : ");
	for(i=0;i<n;i++) {
		scanf("%d",&a2[i]);
		c[k]=a2[i];
		k++;
	}
	for(i=0;i<2*n;i++) {
		printf("%d ",c[i]);
}
printf("\nUncommon elements from two arrays");
	for(i=0;i<2*n;i++) {
		for(j=i-1;j>=0;j--) {
			if(c[i]==c[j])
			flag=1;
		}
		if(flag==0) {
		printf("%d ",c[i]);
		sum=sum+c[i];
	}
		flag=0;
	}
	printf("\nSum of uncommon elements from two arrays is : ");
	printf("%d",sum);
		 return 0;
	
}
