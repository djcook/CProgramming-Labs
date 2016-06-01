#include<stdio.h>

int main()
{
	int num;// number you enter
	int fib = 1;//fibonacci value or (n - 1)
	int x = 3;//loop variable
	int pfib = 1;//previous fib or (n - 2)

	printf("Enter an interger: ");
	scanf("%d", &num);

	if(num < 3)
	{
		if(num == 0)
		{
			printf("The Fibonnacci value for %d is %d\n", num, num);			
		}
		else if(num == 1)
		{
			printf("The Fibonnacci value for %d is %d\n", num, num);
		}
		else
		{
			printf("The Fibonnacci value for %d is %d\n", num, fib);
		}
	}
	else
	{
		while(x <= num)
		{
			fib = fib + pfib ;
			pfib = fib - pfib;
			x++;
		}

		printf("The Fibonacci value for %d is %d\n", num, fib);
	}

	return 0;
}
