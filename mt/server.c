/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerturk <myerturk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:51:21 by myerturk          #+#    #+#             */
/*   Updated: 2023/10/23 14:27:10 by myerturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "Libft/libft.h"

void	signal_process(int signal)
{
	static unsigned char	x = 0;
	static int				i = 128;

	if (signal == SIGUSR1)
		x += i;
	i /= 2;
	if (i == 0)
	{
		ft_printf("%c", x);
		i = 128;
		x = 0;
	}
}

int	main(void)
{
	ft_printf("Server started with PID: %d\n", getpid());
	signal (SIGUSR1, signal_process);
	signal (SIGUSR2, signal_process);
	while (1)
		pause();
	return (0);
}
