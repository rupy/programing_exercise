#include <stdio.h>

int main(){
  int num[10];
  int i;;
  for(i=0;i<10;++i){
    scanf("%d",&num[i]);
  }

  int* p = num;
  int sum = 0;

  for(i=0;i<10;++i,++p){
    sum += *p;
  }
  printf("sum = %d\n",sum);
  return 0;
}
