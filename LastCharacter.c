//c program to display last and second last characters
#include<stdio.h>
int main() {
	char word[100];
	scanf("%s",word);
	int i,str[10],c=0;
	for(i=0;word[i]!='\0';i++) {
	c++;
}
str[0]=word[c-1];
str[1]=word[c-2];
printf("%c %c",str[0],str[1]);
}
