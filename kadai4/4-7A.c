#include <stdio.h>
#include <string.h>


int main(){
  char x[100][100];
  int i,j,k;
  char check[100];
  
  i=0;
  while(scanf("%s",x[i]) != EOF){
    ++i;
  }
  for(j=0;j<i;++j){
    strcpy(check,x[j]);
    for(k=j+1;k<i;++k){
      if(!strcmp(check,x[k])&&check&&x[k][0]){
	  printf("x[%d] = %s\n",j,check);
	x[j][0]=x[k][0]='\0';
      }
    }
  }
  return 0;
}
