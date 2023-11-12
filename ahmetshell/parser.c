#include "minishell.h"

int ft_words_nbr(char *cmd)
{
    char quote;
    int i = 0;
    int wc = 0;
   
    quote = 0;
    while(cmd[i] != '\0')
    {
        quote = 0;
        while(ft_is_delimiter(cmd[i]))
            i++;
        if(cmd[i] && ft_is_quote(cmd[i]))
        {
            wc++;
            quote = cmd[i];
            i++;
            while(cmd[i] && !ft_is_delimiter(cmd[i]))
                i++;
        }
        else if(cmd[i] && ft_is_delimiter(cmd[i]) && wc > -1)
             i = 
    }
}
char **ft_parser(char *cmd, int idx)
{
    char **split;

    split = (char **)malloc(sizeof(char *) * (ft_words_nbr(cmd) + 1));
}