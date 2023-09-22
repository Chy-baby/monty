#ifndef MONTY_H
#define MONTY_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <ctype.h>
#include <fcntl.h>
#define QUEUE 1
#define STACK 0


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct args - Values to be accessed by various functions
 * @list: name of the executable program
 * @count: Tracks the number of lines
 * @i_line: Stores the current input line
 * @d_list:Ptr to a doubly linked list
 * @file: file being processed
 * @layout: FIFO or LIFO
 */
typedef struct args
{
	char **list;
	ssize_t count;
	char *i_line;
	stack_t *d_list;
	FILE *file;
	int layout;
} argt;

extern argt args;

/**
 * struct con - struct to contain the main variables of the Monty interpreter
 * @check: a flag used to check
 * if in stack or queue mode
 * @len: length of stack
 */
typedef struct con
{
int check;
size_t len;
} con_t;

extern con_t con;

void chr_print(stack_t **stack, unsigned int line_number);
void print_str(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void shiftUp(stack_t **stack, unsigned int line_number);
void shiftdown(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void mty(void);
void calls(void);
void clears(void);
stack_t *addNodeEnd(stack_t **list, const int x);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);
void add_ele(stack_t **stack, unsigned int line_number);
void subs(stack_t **stack, unsigned int line_number);
void divi(stack_t **stack, unsigned int line_number);
void modulo(stack_t **stack, unsigned int line_number);
void product(stack_t **stack, unsigned int line_number);
stack_t *addNode(stack_t **head, const int x);
size_t printLists(const stack_t *h);
int delNodidx(stack_t **head, unsigned int idx);
void freeList(stack_t *head);
size_t sizeStack(const stack_t *x);
int isNumStr(char *str);

#endif
