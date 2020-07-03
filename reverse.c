//reserve of a number
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverseFiveDigitNum(int fiveDigitNum) {
	int r,n,rev=0;
	n=fiveDigitNum; //finding reverse of a number
	while(n!=0) {
	r=n%10;
	rev=(rev*10)+r;
	n=n/10;
	}
	return rev;
}

int main(int argc, char *argv[]) {
	int fiveDigitNum = atoi(argv[1]);
	printf("%d\n", reverseFiveDigitNum(fiveDigitNum));
	return 0;
}

