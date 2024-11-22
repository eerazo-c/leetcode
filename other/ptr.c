#include <stdio.h>

int main()
{
	char c;
	char *ptr;

	c = 'a';
	printf("%c\n", c);
	*ptr = 'n';
	printf("%c\n", c);
}
