#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-program entry point.
 *
 *Return:0 if no error, non-zero value if error.
 */
int main(void)
{
	int n, 1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (ldigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
