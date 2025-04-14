/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malcolm.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vahemere <vahemere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 12:13:41 by vahemere          #+#    #+#             */
/*   Updated: 2025/04/14 14:49:08 by vahemere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MALCOLM_H
#define FT_MALCOLM_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <errno.h>
#include <ctype.h>

void handleErrorMessage(int code, const char *detail);
int parsing_args(int ac, char **av);

#define DELIMAC ':'

#define FAILURE -1
#define SUCCESS 0
#define ERR_ARGS 1
#define ERR_IP_FORMAT 2
#define ERR_MAC_FORMAT 3
// #define ERR_SOCKET 4
// #define ERR_INTERFACE 5
// #define ERR_PERMISSION 6
// #define ERR_ARP 7

#endif