/*
** getCreature.c for  in /home/user/DEVC/Battle/verche_a
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 00:57:12 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:04:51 2015 VERCHERE Alexandre
*/

#include "my_header.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define	NBCREA 5

static t_creature g_creatures[] =
  {
    {"Koopa", 1, 10, 10, 20, 20},
    {"Bob bomb", 1, 10, 10, 20, 20},
    {"Yoshi", 1, 10, 10, 20, 20},
    {"Maskas", 1, 10, 10, 20, 20},
    {"Kucco", 1, 10, 10, 20, 20},
    {NULL, 0, 0, 0, 0, 0}
  };

t_creature	*getCreature()
{
  int		rnd;
  t_creature	*crea;

  srand (time (NULL));
  rnd = rand() % NBCREA;
  if ((crea = malloc(sizeof(t_creature))) == NULL)
    return (NULL);
  crea->name = strdup(g_creatures[rnd].name);
  if (!crea->name)
    return (NULL);
  crea->lvl = g_creatures[rnd].lvl;
  crea->pv = g_creatures[rnd].pv;
  crea->pvmax = g_creatures[rnd].pvmax;
  crea->pm = g_creatures[rnd].pm;
  crea->pmmax = g_creatures[rnd].pmmax;
  return (crea);
}
