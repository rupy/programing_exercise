#include <stdio.h>
#include <string.h>

int check_tel(char telA[],char telB[]){

  char *pA = telA;
  char *pB = telB;
  for(;*pA != '\0';++pA);
  for(;*pB != '\0';++pB);

  if(*(pA-1) == *(pB-1)&&
     *(pA-2) == *(pB-2)&&
     *(pA-3) == *(pB-3)&&
     *(pA-4) == *(pB-4)
     ){
    return 1;
  }
  return 0;
}

int main(void){

  struct{
    char name[50],tel[30];
    int height;
  }data[10],*ptA,*ptB;

  size_t min=50;
  int min_l;

  int i,j;
  for(i=0;i<10;++i){
    scanf("%s %s %d",data[i].name,data[i].tel,&data[i].height);
  }
  
  printf("     name     phone     height\n");

  for(i=0,ptA=data;i<10;++i,++ptA){
    for(j=i+1,ptB=ptA+1;j<10;++j,++ptB){
      if(check_tel(ptA->tel,ptB->tel)){
	printf("%10s %10s %3d\n",ptA->name,ptA->tel,ptA->height);
	printf("%10s %10s %3d\n",ptB->name,ptB->tel,ptB->height);
      }
    }
  }

  
}
