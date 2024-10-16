#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/********************************/
/*          MACRO              */
/******************************/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif


/********************************/
/*         INCLUDES            */
/******************************/

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>


/********************************/
/*         FUNCTIONS           */
/******************************/

char	*get_next_line(int fd);

#endif
