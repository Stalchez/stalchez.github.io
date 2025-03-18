#include <stdio.h>
#include <math.h>

int popularity;
int size;
int homeValue;

int main()
{
	printf("Enter popularity:");
	scanf("%d",&popularity);
	printf("Enter size:");
	scanf("%d",&size);
	homeValue = (pow(popularity,3)+pow(size,2))*10000;
	printf("Here is your home value: %d",homeValue);
}
