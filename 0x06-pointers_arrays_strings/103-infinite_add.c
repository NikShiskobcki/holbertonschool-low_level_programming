#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * infinite_add - adds 
 * @n1: input
 * @n2: input
 * @r: input
 * @size_r: input
 * Return: result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int n1Int, n2Int, sum, i;
//------------------------------
  i = 0;
  while (n1[i] != '\0')
    {
      i++;
    }
  n1Int = i;
  //n1 en int
//-----------------------------  
  i = 0;
  while (n2[i] != '\0')
    {
      i++;
    }
  n2Int = i;
  //n2 en int
//------------------------------
  sum = n1Int + n2Int;
  //suma en int
//------------------------------
  

  
  
  

  return (r);
}
