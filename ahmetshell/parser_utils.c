#include "minishell.h"

int	ft_is_delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int	ft_is_quote(char c)
{
	if (c == '\"' || c == '\'')
		return (1);
	return (0);
}

int find_len_util(char *cmd, int i, char quote)
{
    while(cmd[i] && (!ft_is_delimiter(cmd[i]) || quote > 0))
    {
        if(quote > 0 && quote == cmd[i]
            && cmd[i + 1] && cmd[i + 1] == ' ')
        {
            i++;
            break;
        }
        if (ft_is_quote(cmd[i]))
            quote = cmd[i];
        i++;
    }
    return(i);
}
