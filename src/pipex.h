/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:40:04 by bfallah-          #+#    #+#             */
/*   Updated: 2024/02/04 17:29:56 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include "../libft/libft.h"

void	handle_files(char *infile, char *outfile, int *in_fd, int *out_fd);
void	execute_cmd1(int in_fd, int pipefd[2], char *cmd);
void	execute_cmd2(int out_fd, int pipefd[2], char *cmd);
void	setup_and_exec_cmds(int argc, char *argv[]);

#endif
