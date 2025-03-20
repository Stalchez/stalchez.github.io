#include <stdio.h>
#include <math.h>

int computeHomeValue(int popularity,int size){
	int computeHomeValue=(pow(popularity,3)+pow(size,2))*10000;
	return computeHomeValue;
}

int main(){
	int size;
	int popularity;
	printf("Enter Popularity and Size respectively:");
	scanf("%d%d",&popularity,&size);
	int a = computeHomeValue(popularity,size);
	printf("Here is your home value: %d",a);
	return 0;
}
