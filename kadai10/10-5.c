#include <stdio.h>
#include <string.h>


int name_comp(char name1[],size_t len1,char name2[],size_t len2){

  int i,j,count=0;
  char mem[100];
  for(i=0;i<len1;++i){
    for(j=0;j<len2;++j){
      if(name1[i]==name2[j]){
	//printf("%c",name1[i]);
	++count;
      }
    }
  }
  printf("%d",count);
  puts("");
  return count;
}
  
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
      if(name_comp(data[i].name,strlen(data[i].name),data[j].name,strlen(data[j].name))>=3){
	printf("%10s %10s %3d\n",data[i].name,data[i].tel,data[i].height);
	printf("%10s %10s %3d\n",data[j].name,data[j].tel,data[j].height);
      }
    }
  }

  
}
