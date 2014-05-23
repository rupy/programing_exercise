#include <stdio.h>

int main(){
  int x[100];
  int i = 0;

  printf("Input:");
  while((x[i] = getchar()) != '\n'){
    ++i;
  }
  int n = i;
  for(i=0;i<n;++i){
    printf("x[%d] = %c\n",i,x[i]);
  }
}
