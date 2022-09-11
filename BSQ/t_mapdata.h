


#ifndef T_MAPDATA_H
# define T_MAPDATA_H

typedef struct s_mapdata
{
	int		rows;
	int		cols;
	int		max;
	char	empty;
	char	obstacle;
	char	filled;
} t_mapdata;

#endif