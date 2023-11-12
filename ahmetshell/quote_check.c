#include "minishell.h"

int quote_check(char *cmd)
{
    int i;
    int quote;
    int dquote;

    i = 0;
    quote = 0;
    dquote = 0;

    while(cmd[i])
    {
        if(cmd[i] == '\'' && dquote == 0)
            quote = !quote;
        if(cmd[i] == '\"' && quote == 0)
            dquote = !dquote;
        i++;
    }
    if(quote == 1 || dquote == 1)
    {
        ft_putstr_fd("Error: quote not closed\n", 1);
        return(0);
    }
    return(1);
}