/*
** starter.c for  in /home/user/DEVC/Battle/verche_a/Introduction
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 03:14:12 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:01:30 2015 VERCHERE Alexandre
*/x

#include "my_header.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

int	starter(t_creature *creature)
{
  char	*user_choice;

  creature = getCreature();
  my_putstr("\nLa créature : ");
  my_putstr(creature->name);
  my_putstr(" arrive !!\n");
  user_choice = "0";
  while (my_strcmp(user_choice, "q") != 0)
    {
      user_choice = user_input();
      if (my_strcmp(user_choice, "magic catch") == 0)
      {
        magic(creature);
      }
      else if (my_strcmp(user_choice, "help me !!!") == 0)
	       help(creature);
    }
  //free(user_choice);
  return (0);
}

void magic(t_creature *creature)
{
  int t;

  srand (time (NULL));
  t = rand() % 500000;

  if ((t % 3) == 0)
  {
    my_putstr("vous avez reussi à capturer la creature");
    display_info_creature(creature);
  }
  else
  {
    my_putstr("vouas avez rater la capture!\n");
    help(creature);
    //my_putstr(" la créature s'énerve et vous charge violemment");
  }
}

void help(t_creature *creature)
{
  my_putstr("vous fuyez lâchement le combat");
  starter(creature);
}


void display_info_creature(t_creature *creature)
{
  my_putstr("\n\n");
  my_putstr("nom de la creature : ");
  my_putstr(creature->name);
  my_putstr("\n");
  my_putstr("level de la creature : ");
  my_put_nbr(creature->lvl);
  my_putstr("\n");
  my_putstr("pv de la creature : ");
  my_put_nbr(creature->pv);
  my_putstr("\n");
  my_putstr("pvmax de la creature : ");
  my_put_nbr(creature->pvmax);
  my_putstr("\n");
  my_putstr("pm de la creature : ");
  my_put_nbr(creature->pm);
  my_putstr("\n");
  my_putstr("pmax de la creature : ");
  my_put_nbr(creature->pmmax);
  my_putstr("\n\n");  
}