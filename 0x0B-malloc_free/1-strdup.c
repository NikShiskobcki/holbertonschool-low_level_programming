#include "main.h"

/**
 * _strdup - main
 * @str: input
 * Return: char
 *
 */
char *_strdup(char *str)
{
int i, len, j;
char *newstr;
if (str == NULL)
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
}

len = i + 1;
newstr = malloc(len *sizeof(char));

if (newstr ==  NULL)
return (NULL);


for (j = 0; j <= len; j++)
{
newstr[j] = str[j];
}

return (newstr);
}
