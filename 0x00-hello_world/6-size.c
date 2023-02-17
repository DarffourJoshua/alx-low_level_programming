#include <stdio.h>

int main(void)
{
	int a;
       	char b;
       	long int c;
	long long int d;
	float f;	
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
