#include <stdio.h>

int main(){

  int x[10];
  int i;
  int* p;
  int sum = 0;
  int count = 0;

  for(i=0,p=x;i<10;++i,++p){
    scanf("%d",p);
    if(*p%2==0){
      sum += *p;
      ++count;
    }
  }

  printf("ave = %f,%d,%d\n",(float)sum/count,sum,count);
  return 0;

}
