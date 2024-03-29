/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfallah- <bfallah-@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:40:04 by bfallah-          #+#    #+#             */
/*   Updated: 2024/02/07 11:35:17 by bfallah-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

int		ft_open(char *file, int std);
char	*ft_getenv(char *name, char **env);
char	*get_path(char *cmd, char **env);
void	execute(char *cmd, char **env);
void	ft_free(char **tab);
void	ft_exit(int n_exit);

#endif
