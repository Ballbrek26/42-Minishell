#include "minishell.h"

int is_space(char *str)
{
    int i = 0;

    while(str[i] && str[i] == ' ')
        i++;

    if(str[i] == '\0')
        return(1);
    return(0);
}