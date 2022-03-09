#include "3-calc.h"

/**
 *
 *
 *
 *
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
if (s != '+' || s != '-' || s != '*' || s != '/' || s != '%' )
return (NULL);

while (s != ops[i].op)
{      
i++;
}
return (ops[i].f(int, int))
}
