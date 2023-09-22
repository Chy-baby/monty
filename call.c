#include "monty.h"

/**
 * calls - calls
 * return: Returns nothing(void)
 */
void calls(void)
{
	instruction_t instruct[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add_ele},
		{"nop", nop},
		{"sub", subs},
		{"div", divi},
		{"mul", product},
		{"mod", modulo},
		{"pchar", chr_print},
		{"pstr", print_str},
		{"rotl", shiftUp},
		{"rotr", shiftdown},
		{"queue", queue},
		{"stack", stack},
		{NULL, NULL}};
	int a = 0;
	char *x = NULL;

	x = strtok(args.i_line, " \n");
	if (!x || *x == '#')
		return;
	while (instruct[a].opcode && x)
	{
		if (!strcmp(x, instruct[a].opcode))
		{
			instruct[a].f(&(args.d_list), args.count);
			return;
		}
		a++;
	}
	fprintf(stderr, "L%ld: unknown instruction %s\n", args.count, x);
	clears();
	exit(EXIT_FAILURE);
}
