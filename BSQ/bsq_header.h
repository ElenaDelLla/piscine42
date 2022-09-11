/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_header.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmontes- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:31:52 by lmontes-          #+#    #+#             */
/*   Updated: 2022/07/25 16:32:02 by lmontes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> // necesaria para malloc
#include <fcntl.h> //necesaria para open - read etc
#include <stdio.h> //para printf, quitarla al final
#include "t_mapdata.h"
#include "print_matrix.h"
#include "solve_matrix.h"
#include "prepare_matrix.h"

//#include "read_matrix.h" //falta crearlo