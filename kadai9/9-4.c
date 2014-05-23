#include <stdio.h>
#include <string.h>

int main(void){

  struct{
    char name[50],tel[30];
    int height;
  }data[10];

  size_t min=50;
  int min_l;

  int i,j;
  for(i=0;i<10;++i){
    scanf("%s %s %d",data[i].name,data[i].tel,&data[i].height);
  }
  
  printf("     name     phone     height\n");

  for(i=0;i<10;++i){
    for(j=i+1;j<10;++j){
      if(data[i].name[0] == data[j].name[0]&&
	 data[i].name[1] == data[j].name[1]){
	printf("%10s %10s %3d\n",data[i].name,data[i].tel,data[i].height);
	printf("%10s %10s %3d\n",data[j].name,data[j].tel,data[j].height);
      }
    }
  }

  
}
