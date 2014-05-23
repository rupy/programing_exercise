#include <stdio.h>
#define NUM 10000

void swap(int* x,int* y){
  int tmp = *x;
  *x = *y;
  *y = tmp; 
}

int main(void){

  int x[NUM];
  int i,j;
  int min,min_i;
  

  for(i=0;i<NUM;++i){
    scanf("%d",&x[i]);
  }

  for(i=0;i<NUM-1;++i){
    min=x[i];
    min_i=i;
    for(j=i+1;j<NUM;++j){
      if(x[j]<min){
	min=x[j];
	min_i=j;
      }
    }
    swap(&x[i],&x[min_i]);
  }

  
  for(i=0;i<NUM;i+=1000){
    printf("x[%d]=%d\n",i,x[i]);
  }
}
