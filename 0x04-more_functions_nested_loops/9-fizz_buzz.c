#include <stdio.h>

void main(void)
{
	int i;

	for (i = 1; i <=100; i++)
	{
		if (i % 3 == 0)
		{
		i = "Fizz";
			printf("%d", i);
		}
		printf("%d ", i);

		if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		printf("%d ", i);
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		printf("%d ", i);
	}
}
