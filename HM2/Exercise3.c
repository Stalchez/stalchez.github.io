#include <stdio.h>
#include <stdlib.h>

void Hunerler(float itemPrice,float *donationTotal,float *profitTotal); //prototype
int main(){
	float donationTotal=0.0f;
	float profitTotal=0.0f;
	float itemPrice;
	int i,seed;
	
	FILE* file= fopen("donations.txt","w");
	if(file==NULL){
		printf("Error opening file\n");
		return 1;
	}
	
	printf("Enter a random seed: ",seed); 
	scanf("%d",&seed);
	srand(seed);  
	
	for( i=0; i<50; i++ )  { 
		float aRandomNumber = rand()%2000;  
		itemPrice = (float)aRandomNumber / 100.0f;
		fprintf(file,"Item Price %.2f \n", itemPrice);
		Hunerler(itemPrice,&donationTotal,&profitTotal);
	}
	
	fprintf(file,"Donation is %.2f\n",donationTotal);
	fprintf(file,"Profit is %.2f\n",profitTotal);
	printf("Writing to donations.txt...");
	fclose(file);
	return 0;
}

void Hunerler(float itemPrice,float* donationTotal,float* profitTotal){
	int integer= (int)itemPrice;
	float frac= itemPrice - integer;
	*donationTotal += frac;
	*profitTotal += integer;
} 

