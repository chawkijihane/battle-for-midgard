/*
** my_header.h for  in /home/user/DEVC/Battle/verche_a
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 00:05:01 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:05:41 2015 VERCHERE Alexandre
*/

#ifndef		MY_HEADER_H_
# define	MY_HEADER_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct	s_creature
{
  char		*name;
  int		lvl;
  int		pv;
  int		pvmax;
  int		pm;
  int		pmmax;
}		t_creature;

char		*my_strcpy(char *dest, char *src);
char		*readLine();
char		*user_input();
int		is_option(char *choice);
int		main(int argc, char **argv);
int		my_strcmp(char *s1, char *s2);
void	my_putchar(char c);
void	my_put_nbr(int x);
int		parsing_args(int argc, char **argv);
int		starter();
t_creature	*getCreature();
void		invalid_args();
void		invalid_usage();
void		header();
void		my_putstr(char	*str);
void		magic(t_creature *creature);
void 		help(t_creature *creature);
void display_info_creature(t_creature *creature);

#endif
