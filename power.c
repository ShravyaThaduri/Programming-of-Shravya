//Power of x,n which is calculated as x raised to the power of n i.e, pow(x,n)
#include<stdio.h>
double power(double a, int m);
void main() {
	double x,res;
	int n;
	printf("Enter the base value : ");
	scanf("%lf",&x);
	printf("Enter the exponent value : ");
	scanf("%d",&n);
	res = power(x,n);
	printf("Power value is : %lf",res);
}
double power(double a, int m) {
	int i;
	double p=1.000;
  //calculating negative powers
		if(m<0) {
			m=-m;
			a=1/a;
			for(i=1;i<=m;i++) {
			p=p*a;
		}
		}
    //calculating positive powers
		else {
		    for(i=1;i<=m;i++) {
			 p=p*a;
		}
		}
	return p;
}
