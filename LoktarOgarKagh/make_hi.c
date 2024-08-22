/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_hi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 04:40:23 by sprodatu          #+#    #+#             */
/*   Updated: 2024/05/28 05:37:03 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstring(int fd, char *input_str)
{
	int	num_of_letters;
	int index;

	num_of_letters = 0;
	index = 0;
	while (input_str[index] != '\0')
	{
		num_of_letters++;
		index++;
	}
	write(fd, input_str, num_of_letters);
}

int	main(void)
{
	// printf("Hello world!");
	// write(1, "Hello world", 11);
	// write takes 3 things
	// 1st is the file number where we want to write -> 0 = input, 1 = output, 2 = error file.
	// 2nd is what we want to write
	// 3rd is how many letters we are writing
	ft_putstring(1, "hello world\n");
	ft_putstring(0, "ok it is working\n");
	return (0);
}
