#include <stdio.h>

void change(char *c)
{
	*c = 'n';
}

int main()
{
	char c;

	c = 'a';
	printf("%c\n", c);
	change(&c);
	printf("%c\n", c);
}
