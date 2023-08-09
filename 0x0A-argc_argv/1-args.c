#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed
 * @argc: number of arguments
 * @argv: pointer to an array of command line arguments
 *
 * Return:0-Success, non-zero-fail.
 */

int main(int argc, char *argv[] __attribute__((unsed)))
{
		printf("%d\n", argc - 1);
		return (0);
}

