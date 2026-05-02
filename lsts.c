
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list{
	void *content;
	struct s_list *next;
} t_list;

t_list *ft_lstnew(void *contents)
{
	t_list *new;
	
	new = malloc(sizeof(t_list) * 1);
	if (new == NULL)
		return (NULL);
	//(*new).content = content;
	new->content = contents;
	new->next = NULL;
	return (new);
}

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((lst==NULL) || (new==NULL))
		return ;
	new->next = *lst;
	*lst = new;
}

int	ft_lstsize(t_list *lst)
{
	int i;
	i = 0;
	while(lst)
	{
		lst = lst->next;
		i++; 
	}
	return (i);
}

t_list *ft_lstlast(t_list *lst)
{
	while(lst->next)
		lst = lst->next;
	return (lst);
}

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *t;
	
	if ((lst==NULL) || (new == NULL))
		return ;
	if (*lst==NULL)
	{
		*lst = new;
		return ;
	}
	t = ft_lstlast(*lst);
	t->next = new;
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
void ft_del(void*p)
{
	printf("deleted\n");
}

int main(void)
{
	t_list *ex;
	ex = NULL;
	
	char *c1 = "content 1";
	char *c2 = "content 2";
	
	ft_lstadd_back(&ex, ft_lstnew(c1));
	ft_lstadd_front(&ex, ft_lstnew(c2));
	ft_lstadd_back(&ex, ft_lstnew(c2));
	printf("%d\n", ft_lstsize(ex));
	printf("last %s\n", (char*)ft_lstlast(ex)->content);
	ft_lstdelone(ft_lstlast(ex), &ft_del);
	ex->next->next = NULL;
	printf("%d\n", ft_lstsize(ex));
	printf("last %s\n", (char*)ft_lstlast(ex)->content);
	
	while (ex)
	{
		printf("%s\n", (char*)ex->content);
		ex = ex->next;
	}

	return (0);
}