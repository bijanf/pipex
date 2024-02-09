/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 16:35:36 by bfallah-          #+#    #+#             */
/*   Updated: 2024/02/09 08:26:20 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	execute(char *cmd, char **env)
{
	char	**splited_cmd;
	char	*path;

	splited_cmd = ft_split(cmd, ' ');
	path = get_path(splited_cmd[0], env);
	if (execve(path, splited_cmd, env) == -1)
	{
		ft_putstr_fd("pipex: command not found: ", 2);
		ft_putendl_fd(splited_cmd[0], 2);
		ft_free(splited_cmd);
		exit(0);
	}
}

void	execute_process(char **av, int *p_fd, char **env, int is_child)
{
	int		fd;

	if (is_child)
	{
		fd = ft_open(av[1], 0);
		dup2(fd, 0);
		dup2(p_fd[1], 1);
		close(p_fd[0]);
		execute(av[2], env);
	}
	else
	{
		fd = ft_open(av[4], 1);
		dup2(fd, 1);
		dup2(p_fd[0], 0);
		close(p_fd[1]);
		execute(av[3], env);
	}
}

int	main(int ac, char **av, char **env)
{
	int		p_fd[2];
	pid_t	pid;

	if (ac != 5)
		ft_exit(1);
	if (pipe(p_fd) == -1)
		exit(-1);
	pid = fork();
	if (pid == -1)
		exit(-1);
	if (!pid)
	{
		execute_process(av, p_fd, env, 1);
	}
	else
	{
		execute_process(av, p_fd, env, 0);
	}
}
