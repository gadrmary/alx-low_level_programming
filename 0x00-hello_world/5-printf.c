#include <stdio.h>
/**
 * main - Entry point
 *
 *Description: using size to print size of various types
 *
 * Return: Always 0 (success)
*/
int main(void)
{
        printf("the size of a char: %lubyte(s)\n".sizeof(char)); 
	printf("the size of an int: %lubyte(s)\n".sizeof(int));
	printf("the size of a long int: %lubyte(s)\n".sizeof(long int));
	printf("the size of a long long int: %lubyte(s)\n".sizeof(long long int));
	printf("the size of a float: %lubyte(s)\n".sizeof(float));
	return (0);
}
