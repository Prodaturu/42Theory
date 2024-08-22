/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threads.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 12:48:56 by sprodatu          #+#    #+#             */
/*   Updated: 2024/06/21 12:58:00 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void	*routine(void *arg)
{
	printf("Hello from process id %d\n", getpid());
	return (NULL);
}

int	main(int argc, char **argv)
{
	pthread_t	thread1;
	pthread_t	thread2;

	if (pthread_create(&thread1, NULL, &routine, NULL))
		return (perror("pthread_create"), 1);
	if (pthread_create(&thread2, NULL, &routine, NULL))
		return (perror("pthread_create"), 1);
	if (pthread_join(thread1, NULL))
		return (perror("pthread_join"), 1);
	if (pthread_join(thread2, NULL))
		return (perror("pthread_join"), 1);
	return (0);
}
