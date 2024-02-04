/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:35:36 by bfallah-          #+#    #+#             */
/*   Updated: 2024/02/04 17:37:19 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	handle_files(char *infile, char *outfile, int *in_fd, int *out_fd)
{
	*in_fd = open(infile, O_RDONLY);
	if (*in_fd < 0)
	{
		perror("Error opening input file");
		exit(EXIT_FAILURE);
	}
	*out_fd = open(outfile, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (*out_fd < 0)
	{
		perror("Error opening output file");
		exit(EXIT_FAILURE);
	}
}

void	execute_cmd1(int in_fd, int pipefd[2], char *cmd)
{
	char	*argv[2];

	argv[0] = cmd;
	argv[1] = NULL;
	dup2(in_fd, STDIN_FILENO);
	close(in_fd);
	dup2(pipefd[1], STDOUT_FILENO);
	close(pipefd[0]);
	close(pipefd[1]);
	if (execvp(cmd, argv) == -1)
	{
		perror("execvp cmd1");
		exit(EXIT_FAILURE);
	}
}

void	execute_cmd2(int out_fd, int pipefd[2], char *cmd)
{
	char	*argv[2];

	dup2(pipefd[0], STDIN_FILENO);
	close(pipefd[1]);
	close(pipefd[0]);
	dup2(out_fd, STDOUT_FILENO);
	close(out_fd);
	argv[0] = cmd;
	argv[1] = NULL;
	if (execvp(cmd, argv) == -1)
	{
		perror("execvp cmd2");
		exit(EXIT_FAILURE);
	}
}

void	setup_and_exec_cmds(int argc, char *argv[])
{
	int	in_fd;
	int	out_fd;
	int	pipefd[2];

	(void)argc;
	handle_files(argv[1], argv[4], &in_fd, &out_fd);
	if (pipe(pipefd) == -1)
	{
		perror("pipe");
		exit(EXIT_FAILURE);
	}
	if (fork() == 0)
	{
		execute_cmd1(in_fd, pipefd, argv[2]);
	}
	if (fork() == 0)
	{
		execute_cmd2(out_fd, pipefd, argv[3]);
	}
	close(in_fd);
	close(out_fd);
	close(pipefd[0]);
	close(pipefd[1]);
	wait(NULL);
	wait(NULL);
}

int	main(int argc, char *argv[])
{
	if (argc != 5)
	{
		ft_putstr_fd("error: ./pipex infile cmd1 cmd2 outfile\n", 2);
		exit(EXIT_FAILURE);
	}
	setup_and_exec_cmds(argc, argv);
	return (0);
}
