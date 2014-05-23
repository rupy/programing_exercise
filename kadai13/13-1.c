#include <stdio.h>

void swap(int* x,int* y){
  int tmp = *x;
  *x = *y;
  *y = tmp; 
}

int main(void){

  int x[10];
  int i=0;
  int min,min_i;
  

  for(i=0;i<10;++i){
    scanf("%d",&x[i]);
  }
  min=x[0];
  min_i=0;
  for(i=1;i<10;++i){
    if(x[i]<min){
      min=x[i];
      min_i=i;
    }
  }
  swap(&x[0],&x[min_i]);

  min=x[1];
  for(i=2;i<10;++i){
    if(x[i]<min){
      min=x[i];
      min_i=i;
    }
  }
  swap(&x[1],&x[min_i]);
  
  for(i=0;i<10;++i){
    printf("x[%d]=%d\n",i,x[i]);
  }
}
