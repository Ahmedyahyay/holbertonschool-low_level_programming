#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed as arguments and prints the sum
 * @argc: Number of command-line arguments
 * @argv: Array of pointers to arguments
 * Return: 0 on success, 1 if an invalid input is encountered
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		c = argv[argc];

		if (*c == '-')
			c++;

		while (*c)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
			c++;
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
