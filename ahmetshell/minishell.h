#ifndef MINISHELL_H
#define MINISHELL_H

# include "includes.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef struct s_env
{
    char *front;
    char *back;
    struct s_env *next;
}   t_env;

typedef struct  s_expand
{
    char    *str;
    struct s_expand *next;
} t_expand;

typedef struct s_lexer
{
    char **token;
} t_lexer;

typedef struct  s_shell
{
    t_env *env; //t_list di t_env yaptım
    char *cmd;
    t_lexer *lex_list; // değişebilir.
    t_list *parse;
    char *heredoc; // ???
    int exec_status;
    int exit_status;
} t_shell;


int g_signal;

void	ft_putstr_fd(char *s, int fd);
void ft_signal(void);
int quote_check(char *cmd);
void sig_int(int sig);
void	free_loop(t_shell *shell, int control);
int is_space(char *str);
int	ft_is_delimiter(char c);
int ft_words_nbr(char *cmd);
void set_and_execute(char *cmd);
char **ft_parser(char *cmd);
int	ft_is_quote(char c);
int find_len_util(char *cmd, int i, char quote);

#endif