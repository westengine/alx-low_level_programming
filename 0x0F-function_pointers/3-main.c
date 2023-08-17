#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
  * main - prints the results of simple operations.
  * @argc: the num of arg supplied to the program.
  * @argptr: an array of pointers to the arg.
  * Return: Always 0.
  */
int main(int __attribute__((__unused__)) argc, char *argptr[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argptr[1]);
	op = argptr[2];
	b = atoi(argptr[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && b == 0) ||
			(*op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
