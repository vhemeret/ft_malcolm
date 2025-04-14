/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:40:41 by vahemere          #+#    #+#             */
/*   Updated: 2025/04/14 15:22:25 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_malcolm.h"

void handleErrorMessage(int code, const char *detail)
{

    fprintf(stderr, "ft_malcolm: ");

    switch (code)
    {
    case ERR_ARGS:
        fprintf(stderr, "usage: ft_malcolm <source_ip> <source_mac> <target_ip> <target_mac>\n");
        break;
    case ERR_IP_FORMAT:
        fprintf(stderr, "Unknow host or invalid ipv4 address: ");
        break;
    case ERR_MAC_FORMAT:
        fprintf(stderr, "MAC address invalid: ");
    default:
        {
            fprintf(stderr, "%s\n", detail);
        }
    }
}