/*
** my_strcpy.c for  in /home/user/DEVC/Battle/verche_a/Introduction
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 02:32:39 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:03:22 2015 VERCHERE Alexandre
*/

#include "my_header.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return (dest);
}
