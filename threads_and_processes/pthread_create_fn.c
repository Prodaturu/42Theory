/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pthread_create_fn.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:54:00 by sprodatu          #+#    #+#             */
/*   Updated: 2024/06/23 21:46:14 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void	*routine(void *input_args)
{
	int			*values;

	values = (int *)input_args;
	printf ("Recieved the value '%d' from the thread with pid: '%d'\n", values[0], values[1]);
	return (NULL);
}

int	main(void)
{
	pthread_t	thread;
	int			*values;

	values = malloc(sizeof(int) * 2);
	values[0] = 42;
	values[1] = getpid();
	if (pthread_create(&thread, NULL, &routine, values))
		return (perror("pthread_create"), 1);
	pthread_join(thread, NULL);
	// usleep(10);
	// using usleep for pthread_join most likely runs the thread but wouldn't wait for it to finish
	free(values);
	return (0);
}
