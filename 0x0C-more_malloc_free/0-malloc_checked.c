#include "main.h"
#include <limits.h>
/**
 *
 *
 *
 */
void *malloc_checked(unsigned int b)
{
  
  void *mal = malloc(b);
  if (mal == NULL)
    exit (98);
  return(mal);
   
  
}
