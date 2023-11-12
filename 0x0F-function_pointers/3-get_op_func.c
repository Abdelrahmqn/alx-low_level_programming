#include "3-calc.h"
/**
 * get_op_func - function pointers operators.
 * @s: string of characters.
 * Return: NULL if no matching operator found.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	if (s == NULL)
	return (NULL);

	for (i = 0; i < 5; i++)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
