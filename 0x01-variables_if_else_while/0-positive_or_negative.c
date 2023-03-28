#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program entry
 * @void: Get's no parameters
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	 * if..else if..else - Evaluates sign of n
	 *@n: condition checking
	 *
	 * Return: String
	 */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
