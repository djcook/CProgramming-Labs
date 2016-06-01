#include <stdio.h>

int main()
{
	float term1; //first term
	float difference;
	float amount; //number of terms
	float lastTerm;
	float sum;
	float average;

	printf("Enter first term: ");
	scanf("%f", &term1);
	
	printf("Enter common difference: ");
	scanf("%f", &difference);
	
	printf("Enter number of terms: ");
	scanf("%f", &amount);

	lastTerm = term1 + (amount - 1) * difference;
	sum = amount * (term1 + lastTerm) / 2;
	average = sum / amount;

	printf("\nThe last term is %.0f \n", lastTerm);
	printf("The average of all the terms is %.1f \n", average);
	printf("The sum of all the terms is %.0f \n", sum);

	return 0;
}
