#include <stdio.h>
#include <string.h>

int main(void){

  struct{
    char name[50],tel[30];
    int height;
  }data[10];

  size_t min=50;
  int min_l;

  int i;
  for(i=0;i<10;++i){
    scanf("%s %s %d",data[i].name,data[i].tel,&data[i].height);
    if(strlen(data[i].name)<min){
      min_l =  strlen(data[i].name);
    }
  }
  
  printf("     name     phone     height\n");

  for(i=0;i<10;++i){
    if(strlen(data[i].name)==min_l){
      printf("%10s %10s %3d\n",data[i].name,data[i].tel,data[i].height);
    }
  }

  
}
