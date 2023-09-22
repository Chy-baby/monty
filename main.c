
#include "monty.h"

argt args;

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of argc
 * Return: success on exit, exit failure otherwise
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	args.list = argv;
	args.count = 0;
	args.i_line = NULL;
	args.d_list = NULL;
	args.file = NULL;
	args.layout = 1;
	mty();
	freeList(args.d_list);
	return (EXIT_SUCCESS);
}
