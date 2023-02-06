#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

typedef struct t_node
{
	int			data;
	struct t_node	*next;
}	lst_t;

lst_t	*lst_create(int	data)
{
	lst_t	*new;

	if (!data)
		return (NULL);
	new = malloc(sizeof(lst_t));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}

void	lst_add(lst_t **head, lst_t *new)
{
	lst_t	*temp;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

void	show(lst_t *head)
{
	if (!head)
		return ;
	while (head != NULL)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

int	main(void)
{
	lst_t	*head, *new;
	char	check[10];
	int		data;
	int		i1, i2;

	head = NULL;
	while (1)
	{
		bzero(check, 10);
		scanf("%s", check);
		if (!strcmp(check, "END"))
			break ;
		data = atoi(check);
		new = lst_create(data);
		lst_add(&head, new);
	}
	//scanf("%d %d", &i1, &i2);
	//swap(head, i1, i2);
	show(head);
	return (0);
}
