#include <stdio.h>

int main(void){
  char x[100];
  char* pt;
  scanf("%s",x);

  for(pt=x;*pt!='\0';++pt);
  printf("Length = %d\n",pt-x);
  return 0;
}
