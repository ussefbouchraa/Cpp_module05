/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   micro.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 04:34:55 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/28 06:02:47 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

int ft_err(char *str)
{
    while(*str)
        write(2, str++, 1);
    return(1);
}

int _cd(char **av, int i)
{
    if(i != 2)
        return(ft_err("bad_arg \n"));
    else if(chdir(av[1]) == -1 )
        return(ft_err("xxxx\n"));
    return(0);
}

  int _exec(char **av, char **env, int i)
  {
    int status;
    int fd[2];
    int has_p = av[i] && !strcmp(*av, "|");

    if(!has_p || pipe(fd) == -1)
        return(ft_err("xxxx"));
    int pid = fork();

    if(pid == 0)
    {
        av[i] = 0;
        if (has_p && (dup2(fd[1], 1) == -1 || close(fd[0] || close(fd[1]))))
                return(ft_err("?????\n"));  
        if(execve(*av, av, env))
            return(ft_err("err:execv"));
            
    }
    waitpid(pid,&status, 0);
    if(dup2(fd[0], 0) == -1 || close(fd[0]), close(fd[1]))
        return(ft_err("xxxxxx\n"));
    return (WIFEXITED(status) && WEXITSTATUS(status));
  }

int main(int ac, char **av, char **env)
{
    int i = -1;
    int status = 0;
    if(ac > 1)
    {
        *av +=1;
    while (av[i] && av[++i])
    {
        while(av[i] && strcmp(av[i], "|") && strcmp(av[i], ";"))
            i++;
        if(!strcmp(*av, "cd"))
            status = _cd(av, i);
        else if(i)
            status =_exec(av, env, i);
    }
}
return(0);
}