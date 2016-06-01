/*
Program Name: gcd_recursive.c
Programmer: Dylan Cook
Assignment: Lab 5
Date: 10/27/2015
*/

//This is a program made to use the recursive function of the gcd

#include <stdio.h>

int gcd(int m, int n)
{
	if((m % n) == 0)
	{
		return n;
	}
	else
	{
		return gcd(n, (m % n));
	}
}

int main()
{
	int m = 0;
	int n = 0;

	printf("Please input m: ");
	scanf("%d", &m);

	printf("Please input n: ");
	scanf("%d", &n);

	printf("GCD: %d\n", gcd(m, n));
}
