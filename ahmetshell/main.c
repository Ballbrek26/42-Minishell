#include "minishell.h"

void shell_init(t_shell **shell)
{
    *shell = malloc(sizeof(t_shell));
    (*shell)->cmd = NULL;
}
void get_readline(t_shell *shell)
{
    shell->cmd = readline("AhmetShell-$ ");

    if(shell->cmd && is_space(shell->cmd))
    {
        free(shell->cmd);
        get_readline(shell);
    }

    if(!shell->cmd)
    {
        /*free_loop(shell, 0);
        free_(shell);
        free(shell->lex_list);
        free(shell);
        exit(1);*/
    }

    add_history(shell->cmd);
}

void set_and_execute(char *cmd)
{
   char **splitted_cmd;
   
   splitted_cmd = ft_parser(cmd, 0);
}
int main(int argc, char **argv, char **env)
{
    t_shell *shell;
    int control;

    (void)argv;
    control = 0;
    if(argc != 1)
        exit(printf("This program cannot accept any arguments"));
       
    shell_init(&shell);

    while(1)
    {
        ft_signal();
        get_readline(shell);
        if(quote_check(shell->cmd))
        {
            set_and_execute(shell->cmd);

        }
    }
}