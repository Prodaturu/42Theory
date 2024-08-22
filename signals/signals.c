/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:03:05 by sprodatu          #+#    #+#             */
/*   Updated: 2024/05/02 18:58:51 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

void	hadndle_sigquit(int sig)
{
	void *sig = NULL;
	ft_printf("Quit: 3\n");
}

void	hadndle_sigint(int sig)
{
	void (sig);
	ft_printf("\n");
	readline("minishell> ");
}

void	handle_sighup(int sig)
{
	(void)sig;
}

int main (int ac, char **av)
{
	handle_signals();
	signal(SIGINT, handle_sigint);
	signal(SIGQUIT, handle_sigquit);
	signal(SIGHUP, handle_sighup);
}
