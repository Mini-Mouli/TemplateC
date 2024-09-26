#include <stdio.h>

char *my_strchr(const char s[], int c,char dist[])
{
  int copy = 0;
  char* distTemp = dist;

  while (*s != '\0')
  {
    if (*s == c)
    {
      copy = 1;
    }
    if (copy == 1)
    {
      *dist = *s;
      dist++;
    }
    s++;
  }
  *dist = '\0';
  dist = distTemp;

  return dist;
}