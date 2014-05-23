#include <stdio.h>
#include <string.h>

int main(void){

  struct{
    char name[50],tel[30];
    int height;
  }data[10];

  char search[30];

  FILE* fp;
  if((fp= fopen("kadai8.txt","r"))==NULL){
    printf("error!!\n");
    return 0;
  }

  int i;
  for(i=0;i<10;++i){
    fscanf(fp,"%s %s %d",data[i].name,data[i].tel,&data[i].height);
  }

  scanf("%s",search);

    
  printf("     name     phone     height\n");
  for(i=0;i<10;++i){
    if(strcmp(data[i].tel,search)==0)
      printf("%10s %10s %3d\n",data[i].name,data[i].tel,data[i].height);
  }

  fclose(fp);
}
