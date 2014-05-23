#include <stdio.h>
#define NUM 10000
#define SEP 1000
#define STEP NUM/SEP

void swap(int* x,int* y){
  int tmp = *x;
  *x = *y;
  *y = tmp; 
}

int main(void){

  int x[NUM];
  int y[STEP][SEP];
  int i,j;
  

  for(i=0;i<NUM;++i){
      scanf("%d",&x[i]);
  }

  for(i=0;i<STEP;++i){
    for(j=0;j<SEP;++j){
      y[i][j]=x[i*SEP+j];
    }
  }

  /*for(i=0;i<NUM;++i){
    for(j=0;j<NUM-1;++j){
      if(x[j]>x[j+1]){
	swap(&x[j],&x[j+1]);
      }
    }
    }*/

  
  for(i=0;i<SEP;++i){
    printf("x[%d]=%d\n",i,y[0][i]);
  }
}
