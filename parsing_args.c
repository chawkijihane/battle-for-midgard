/*
** parsing_args.c for  in /home/user/DEVC/Battle/verche_a/Introduction
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 03:22:45 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:05:30 2015 VERCHERE Alexandre
*/

#include "my_header.h"

int	parsing_args(int argc, char **argv)
{
  if ((argc == 3) && ((my_strcmp(argv[1], "-n")  == 0)))
      return (0);
  else
      return (1);
}
