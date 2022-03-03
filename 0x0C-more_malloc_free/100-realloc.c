#include "main.h"

/**
 * _realloc - main
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

  if ((new_size == 0) && (ptr != NULL))
    {
    free(ptr);
    return (NULL);
    }

  if (new_size <= old_size)
    return (ptr);
  
  if (ptr == NULL)
    {
    ptr = malloc(new_size);
    return(ptr);
    }
    return(ptr);

    
 }
