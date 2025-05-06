#include <stdio.h>
#include <stdlib.h>
#define RAND_MAX 32767


int main( void )
{
int i;
//variable declarations
float aRandomNumber ;
for( i=0; i<50; i++ )  // modified 5 to 50
{ //Generates a random number between 1 and 1000
aRandomNumber = rand()%2001;  // to find numbers between 0-20 we modified 1000 to 2001->(0-2000)
printf("Rand modulo 2001 gives gives %.2f \n", aRandomNumber);
aRandomNumber = aRandomNumber /100;
printf("We divide by 100 to get %.2f \n \n", aRandomNumber);
}
system("pause");
}
