/*
** my_strcmp.c for  in /home/user/DEVC/Battle/verche_a/Introduction
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 02:29:49 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:03:48 2015 VERCHERE Alexandre
*/

#include "my_header.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	value;

  for(i = 0; ((s1[i] != '\0') || (s2[i] != '\0')); i = i + 1)
    {
      if(s1[i] >  s2[i])
	{
	  return (1);
	}
      else if (s1[i] < s2[i])
	{
	  return (-1);
	}
      else
	{
	  value = 0;
	}
    }
  return (value);
}
