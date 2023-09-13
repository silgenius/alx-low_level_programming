#include "3-calc.h"

/**
 * get_op_func - Selects the appropriate function to perform an operation.
 * @s: A pointer to a character array specifying the operation.
 *
 * Description: This function takes a pointer to a character array 's', which
 *              specifies the desired operation, and returns a pointer to a
 *              function that can perform that operation on two integers.
 *
 * Return: A pointer to a function that takes two integers and
 * returns an integer.
 * Returns NULL if the operation is not recognized.
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
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

