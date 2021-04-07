#include <stdio.h>

int main()
{
  char str[1000], rev[1000];
  int i, j, count = 0,flag=0;
  scanf("%s", str);
  while (str[count] != '\0')
  {
    count++;
  }
  j = count - 1;
  for (i = 0; i < count; i++)
  {
    rev[i] = str[j];
    j--;
  }
for(i=0;i<count;i++) {
    if(str[i]!=rev[i])  {
    flag=1;
    }
}
if(flag==1)
printf("False");
else
printf("True");
}
