#include "monty.h"
/**
 * isNumStr - checks a valid numeric value
 * @str: string passed to function
 * Return:Returns a num
 */

int isNumStr(char *str)
{
	register int idx = 0;

	if (!str)
	{
		return (-1);
	}
	if (*str == '-')
	{
		str++;
	}
	while (str[idx])
	{
		if (str[idx] >= '0' && str[idx] <= '9')
		{
			idx++;
		}
		else
		{
			return (-1);
		}
	}
	return (1);
}
