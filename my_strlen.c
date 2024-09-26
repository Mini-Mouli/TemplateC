#include <stdio.h>

size_t my_strlen(const char str[])
{
  if (str == NULL)
  {
    return 0;
  }
  size_t i = 0;

  while ( str[i] != '\0')
  {
    i++;
  }
  return i;
}