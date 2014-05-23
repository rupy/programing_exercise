#include <stdio.h>

int main(){
  char x[100][100];
  int i,j,k;
  
  i=0;
  while(scanf("%s",x[i]) != EOF){
    ++i;
  }
  for(j=0;j<i;++j){
    printf("x[%d] = %s\n",j,x[j]);

    for(k=0;x[j][k]!='\0';++k){
      printf("x[%d][%d] = %c\n",j,k,x[j][k]);
    }
  }
  return 0;
}
