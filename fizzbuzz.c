#include <unistd.h>
#include <stdio.h>

void	write_number(int num)
{
	char *str = "0123456789";
	if (num > 9)
		write_number(num / 10);
	write (1, &str[num % 10], 1);
}

char **fizzBuzz(int n, int* returnSize)
{
	char **ptr;

	*returnSize = n;
	while (n <= 50)
	{
		if (n % 15 == 0)
			write (1, "fizzBuzz", 8);
		else if (n % 3 == 0)
			write (1, "fizz", 4);
		else if (n % 5 == 0)
			write (1, "Buzz\n", 4);
		else 
			write_number(n);
		write(1, "\n", 1);
		n++;
		ptr = (char **)returnSize;
	}
	return (ptr);
}

int main(void)
{
	int n = 1;
	int returnSize;

	char **result = fizzBuzz(n, &returnSize);
	//printf ("mio:%p", result);
	return (0);
}
/*
void	write_number(int num)
{
	char *str = "0123456789";

	if (num > 9)
		write_number(num / 10);
	write (1, &str[num % 10], 1);
}

int main(void)
{
	int n;

	n = 0;
	while (n <= 15)
	{
		if (n % 15 == 0)
			write (1, "Fizzbuzz\n", 9);
		else if (n % 3 == 0)
			write (1, "fizz\n", 5);
		else if (n % 5 == 0)
			write (1, "Buzz\n", 5);
		else 
			write_number(n);
		write (1, "\n", 1);
		n++;
	}
	return (0);
}*/
