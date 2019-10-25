/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: prouvoet <prouvoet@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/09 14:18:09 by prouvoet       #+#    #+#                */
/*   Updated: 2019/04/09 14:19:20 by prouvoet      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*f)(unsigned int, char *))
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		f(i, &str[i]);
		i++;
	}
}
