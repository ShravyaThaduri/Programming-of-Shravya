//to find the sum of highest and lowest numbers in an array
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumOfHighestAndLowestElements(int arr[], int arrLen) {
	//to find highest and lowest terms
	int i,l=0,s=0,sum=0;
	l=arr[0];
	s=arr[0];
	for(i=0;i<arrLen;i++) {
		if(arr[i]>l)
		l=arr[i];
		if(arr[i]<s)
		s=arr[i];
	}
	sum=l+s; //performing sum
	return sum;

}

int readIntArray(char *argsArray, int arr[]) {
	int col = 0;
	char *token = strtok(argsArray, ",");
	while (token != NULL) {
		arr[col] = atoi(token);
		token = strtok(NULL, ",");
		col++;
	}
	return col;
}
int main(int argc, char *argv[]) {
	int arr[strlen(argv[1])];
	int arrLen = readIntArray(argv[1], arr);
	printf("%d\n", sumOfHighestAndLowestElements(arr, arrLen));
	return 0;
}
