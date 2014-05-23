#include <stdio.h>
#define NUM 10

void swap(int* x,int* y){
  int tmp = *x;
  *x = *y;
  *y = tmp; 
}

int main(void){

  int x[NUM];
  int i,j;
  

  for(i=0;i<NUM;++i){
    scanf("%d",&x[i]);
  }

  for(i=0;i<NUM;++i){
    for(j=0;j<NUM-1;++j){
      if(x[j]>x[j+1]){
	swap(&x[j],&x[j+1]);
      }
    }
  }

  
  for(i=0;i<NUM;++i){
    printf("x[%d]=%d\n",i,x[i]);
  }
}
