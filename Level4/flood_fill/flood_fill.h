#ifndef FLOOD_FILL
# define FLOOD_FILL

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_point
{
   int  x;
   int  y;
}       t_point;


void  flood_fill(char **tab, t_point size, t_point begin);

#endif