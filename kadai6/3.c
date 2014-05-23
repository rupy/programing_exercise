#include <stdio.h>

int main(void){
 
  char x[100];
  scanf("%s",x);
  char* pt;

  for(pt=x;*pt!='\0';++pt);

  for(;pt!=x;--pt){
    putchar(*pt);
  }
  puts("");
  
  return 0;
}
