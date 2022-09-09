#include <stdio.h>
/**
 * main - main block
 * return: 0
 */
int main(void)
{
	int i;
	double d;
	char c;
	long int u;
	long long l;
	float f;



	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of a double is: %u.\n", (unsigned long)sizeof(d));
	printf("The size of a char is: %lu\n", (unsigned long) sizeof(c));
	printf("The size of long int is: %lu\n", (long int)sizeof(u));
	printf("The size of long long is: %lu\n", (long long)sizeof(l));
	printf("The size of float is: %lu\n", (float)sizeof(f));
	return(0);
} 
