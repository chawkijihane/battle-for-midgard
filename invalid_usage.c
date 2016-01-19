/*
** invalid_usage.c for  in /home/user/DEVC/Battle/verche_a/Introduction
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 02:39:15 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:04:29 2015 VERCHERE Alexandre
*/

#include "my_header.h"

void	invalid_usage()
{
  my_putstr("\x1B[31mChoix invalide !\x1B[0m\n");
  my_putstr("magic catch : lancer une magic box pour capturer la créature.\n");
  my_putstr("help me !!! : fuir lâchement le combat.\n");
  my_putstr("q : pour sortir du programme.\n\n");
}
