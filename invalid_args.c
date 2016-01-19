/*
** invalid_args.c for  in /home/user/DEVC/Battle/verche_a/Introduction
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 03:29:10 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:05:21 2015 VERCHERE Alexandre
*/

#include "my_header.h"

void	invalid_args()
{
  my_putstr("\x1B[31mArguments invalide !\x1B[0m\n");
  my_putstr("\x1B[1;34mUSAGE: ./sta -n NAME\x1B[0m\n\n");
  my_putstr("OPTION:\n");
  my_putstr("--------------------------\n");
  my_putstr("-n : renseigner votre nom.\n\n");
}
