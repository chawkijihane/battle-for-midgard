/*
** is_option.c for  in /home/user/DEVC/Battle/verche_a/Introduction
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 02:36:22 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:04:18 2015 VERCHERE Alexandre
*/

#include "my_header.h"

int	is_option(char *choice)
{
  if ((my_strcmp(choice, "magic catch") == 0) ||
      (my_strcmp(choice, "help me !!!") == 0) ||
      (my_strcmp(choice, "q") == 0))
    {
      return (0);
    }
  else
    return (1);
}
