/*
** main.c for  in /home/user/DEVC/Battle/verche_a/Introduction
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 01:37:29 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:05:49 2015 VERCHERE Alexandre
*/

#include "my_header.h"

int	main(int argc, char **argv)
{
	t_creature *creature;
	creature = getCreature();
	/*my_putstr(creature->name);
	my_putstr("\n");*/
  if (parsing_args(argc, argv) == 0)
    {
      header();
      starter(creature);
    }
  else
    invalid_args();
  return (0);
}
