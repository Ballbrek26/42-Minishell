/*#include "minishell.h"

void	free_loop(t_shell *shell, int control)
{
	if (shell->cmd)
		free(shell->cmd);
	if (control)
	{
		if (shell->parse)
			free_parser(shell);
	}
	if (shell->heredoc)
	{
		free(shell->heredoc);
		shell->heredoc = NULL;
	}
}

void	free_(t_shell *shell)
{
	free_env(shell);
	rl_clear_history();
}*/