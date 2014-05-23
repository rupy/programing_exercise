#include <stdio.h>

int main(void){

	int max=0;
	int input;

	int i;
	for(i=0;i<10;++i){
		scanf("%d",&input);
		if(input > max)
			max = input;
	}
	printf("Max is [%d]\n",max);

	return 0;
}
