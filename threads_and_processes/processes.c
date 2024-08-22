/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:49:01 by sprodatu          #+#    #+#             */
/*   Updated: 2024/06/21 16:18:02 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(int argc, char **argv)
{
	int	pid;

	pid = fork();
	if (pid == -1)
		return (perror("fork"), 1);
	printf("Hello from processes id %d\n", getpid());
	if (pid != 0)
	{
		wait(NULL);
	}
	return (0);
}
