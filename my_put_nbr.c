/*
** my_put_nbr.c for put in /home/jihane/lib/chawki_j/libmy_01
** 
** Made by CHAWKI Jihane
** Login   <chawki_j@etna-alternance.net>
** 
** Started on  Sat Oct 24 16:33:20 2015 CHAWKI Jihane
** Last update Sat Oct 31 14:59:22 2015 CHAWKI Jihane
*/

#include "my_header.h"

void	my_put_nbr(int x)
{
  int	r;
  int	d;

  if (x != -2147483648)
    {
      if (x < 0)
	{
	  my_putchar('-');
	  x = -x;
	}
      d = 1;
      while ((x / d) >= 10)
	{
	  d = d * 10;
	}
      while (d > 0)
	{
	  r = (x / d) % 10;
	  my_putchar(r + 48);
	  d = d / 10;
	}
    }
  else
    {
      my_putstr("-2147483648");
    }
}
