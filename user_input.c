/*
** user_input.c for  in /home/user/DEVC/Battle/verche_a/Introduction
**
** Made by VERCHERE Alexandre
** Login   <verche_a@etna-alternance.net>
**
** Started on  Tue Dec  1 02:20:07 2015 VERCHERE Alexandre
** Last update Tue Dec  1 05:05:04 2015 VERCHERE Alexandre
*/

#include "my_header.h"

char	*user_input()
{
  char	*choice;

  choice = malloc(sizeof(char) * 2);
  if (choice == NULL)
    return (NULL);
  while (is_option(choice) != 0)
    {
      my_putstr("Votre tour > ");
      choice = my_strcpy(choice, readLine());
      my_putstr("\n");
      if (is_option(choice) != 0)
	{
	  invalid_usage();
	}
    }
  return (choice);
}
