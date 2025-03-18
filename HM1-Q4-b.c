#include <stdio.h>
#include <math.h>

void computeHomeValue(void);

int main(void){
    computeHomeValue();
	return 0;
}
void computeHomeValue(void){
	int popularity;
	int size;
	int homeValue;
	printf("Enter your popularity and size respectively:");
	scanf("%d%d",&popularity,&size);
	homeValue=(pow(popularity,3)+pow(size,2))*10000;
	printf("%d",homeValue);
}
