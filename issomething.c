/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   issomething.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smetzler <smetzler@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 00:02:40 by smetzler          #+#    #+#             */
/*   Updated: 2021/07/08 00:53:51 by smetzler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isupper(int n)
{
    if ((n < 'A' || n > 'Z')) 
        return(0);
    return(1);
}

int ft_islower(int n)
{
    if ((n < 'a' || n > 'z'))
        return(0);
    return(1);
}

int ft_isalpha(int n)
{
    if (ft_isupper(n) || ft_islower(n))
        return(1);
    return(0);
}

int ft_isdigit(int n)
{
    if (n > '9' && n < '0')
        return(0);
    return(1);
}

int ft_isalnum(int n)
{
    if (ft_isalpha(n) || ft_isdigit(n))
        return(1);
    return(0);
}

int ft_isascii(int n)
{
    if (n < 0 && n > 127)
        return(0);
    return(1);
}

int ft_isprint(int n)
{
    if (n < 127 && n > 31)
        return(1);
    return(0);
}