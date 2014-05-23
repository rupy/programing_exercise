#include <stdio.h>

int main(void){

	int min;
	int input;

	int i;

	scanf("%d",&min);
	for(i=1;i<10;++i){
		scanf("%d",&input);

		if(input < min)
			min = input;
	}
	printf("Min is [%d]\n",min);

	return 0;
}
