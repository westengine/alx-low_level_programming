#include <stdio.h>
#include <stdlib.h>

/**
  * main - function that prints its own opcodes
  * @argc: number of arguments
  * @arga: array of arguments
  * Return: Always 0 (Success)
  */
int main(int argcc, char *arga[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(arga[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
