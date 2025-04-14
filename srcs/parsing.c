/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:35:39 by vahemere          #+#    #+#             */
/*   Updated: 2025/04/14 13:39:21 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_malcolm.h"

int check_ipv4(const char *ipv4, struct sockaddr_in *addr){
    
    memset(addr, 0, sizeof(*addr));
    addr->sin_family = AF_INET;
    
    if (inet_pton(addr->sin_family, ipv4, &addr->sin_addr) != 1){
        handleErrorMessage(ERR_IP_FORMAT, ipv4);
        return (FAILURE);
    }
    
    return (SUCCESS);
}

int parsing_args(int ac, char **av)
{
    struct sockaddr_in source_addr;
    struct sockaddr_in target_addr;
    
    if (ac != 5)
    {
        handleErrorMessage(ERR_ARGS, "");
        return (FAILURE);
    }

    if (check_ipv4(av[1], &source_addr) != SUCCESS)
        return (FAILURE);
    
    if (check_ipv4(av[3], &target_addr) != SUCCESS)
        return (FAILURE);

    return (SUCCESS);
}