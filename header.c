/*
** header.c for  in /home/user/DEVC/Battle/verche_a
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 00:12:26 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:04:04 2015 VERCHERE Alexandre
*/

#include "my_header.h"

void	header()
{
  my_putstr("\x1B[2J\x1B[H");
  my_putstr("-------------------------------------------------------------\n");
  my_putstr("Bienvenue sur Battle for Midgard !\n\n");
  my_putstr("magic catch : lancer une magic box pour capturer la créature.\n");
  my_putstr("help me !!! : fuir lâchement le combat.\n\n");
  my_putstr("q : quitter le programme.\n");
  my_putstr("-------------------------------------------------------------\n");
  my_putstr("-------------------------------------------------------------\n");
  my_putstr("\n");
}
