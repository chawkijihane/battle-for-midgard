/*
** my_putstr.c for  in /home/user/DEVC/Battle/verche_a/Introduction
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 01:12:44 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:04:41 2015 VERCHERE Alexandre
*/

#include "my_header.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      write(1, (str + i), 1);
      i = i + 1;
    }
}
