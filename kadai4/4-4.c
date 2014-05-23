#include <stdio.h>

int main(){
  int x[100];
  int i = 0;

  printf("Input:");
  while((x[i] = getchar()) != EOF){
    if(x[i]!='\n')++i;
  }
  int n = i;
  int balance=0;

  for(i=0;i<n;++i){
    if(x[i] == 'x') ++balance;
    else  --balance;
  }

  if(balance>0)puts("X ga ooi");
  else if(balance == 0) puts("onaji");
  else puts("X igai ga ooi");
}
