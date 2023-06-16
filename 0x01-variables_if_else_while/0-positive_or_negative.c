#include <stdlib.h>
#include <time.h>
#include <stdio.h> 

/*
 * main - Entry point 
 *
 * Return (0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	if (n > 0)
		printf("The number %d is positive\n",n);
	if else (n = 0)
		printf("The number %d is zero\n",n);
	else 
		printf("The number %d is negative\n",n);

	return (0);
}
