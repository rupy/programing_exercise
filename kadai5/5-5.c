#include <stdio.h>

int main(){

  char x[100];
  int i = 0;
  char* pt;

  pt = x;
  printf("Input:");
  while(scanf("%s",pt) != EOF){
    while(*pt != '\0')
      ++pt;
  }

  int balance=0;

  for(pt = x;*pt!='\0';++pt){
    if(*pt == 'x') ++balance;
    else  --balance;
  }

  if(balance>0)puts("X ga ooi");
  else if(balance == 0) puts("onaji");
  else puts("X igai ga ooi");
}
