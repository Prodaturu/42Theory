/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sprodatu <sprodatu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 01:16:09 by sprodatu          #+#    #+#             */
/*   Updated: 2024/06/02 01:18:24 by sprodatu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main()
{
	char *input;

	input = readline("Enter command: ");
	// replace line with a different command
	rl_replace_line("suggested_command", 1);
	// refresh display
	rl_redisplay();
	printf("\nYou entered: %s \n", input);
	free(input);
	
	return (0);
}
