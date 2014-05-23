#include <stdio.h>

int main(){
  int x[100];
  int i = 0;
  int* pt;

  pt = x;
  printf("Input:");
  while((*pt = getchar()) != '\n'){
    ++pt;
  }

  int balance=0;

  for(pt = x;*pt!='\n';++pt){
    if(*pt == 'x') ++balance;
    else  --balance;
  }

  if(balance>0)puts("X ga ooi");
  else if(balance == 0) puts("onaji");
  else puts("X igai ga ooi");
}
