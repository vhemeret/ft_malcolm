/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:34:51 by vahemere          #+#    #+#             */
/*   Updated: 2025/04/14 13:06:47 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_malcolm.h"

int main(int ac, char **av){
    
    if (parsing_args(ac, av) != SUCCESS){
        exit (EXIT_FAILURE);
    }
    
    return (0);
}