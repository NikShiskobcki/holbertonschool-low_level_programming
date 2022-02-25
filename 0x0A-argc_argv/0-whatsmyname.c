#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: input
 * @argv : input
 */
int main(int argc, char *argv[])
{
while(argc--)
printf("%s\n", *argv++);

return(0);
}
