//
// Created by Jose Manuel Florido Pereña on 7/1/23.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct s_node {
	int	nb;
	struct s_node	*next;
}	t_node;

/* Insert a new node in the last position */
void	ft_insert_node(t_node **header, int value)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof (t_node));
	node -> nb = value;
	node ->next = NULL;
	// If the list is empty, the first node is the one just created
	if (*header == NULL)
	{
		*header = node;
		return;
	}
	// Go till the last node to insert the new one
	t_node	*last;
	last = *header;
	while (last -> next != NULL)
	{
		last = last -> next;
	}
	last -> next = node;
}

/* Insert a new node in the first position */
void	ft_insert_first(t_node **header, int value)
{
	t_node	*first_node;

	first_node = (t_node *)malloc(sizeof (t_node));
	first_node->nb = value;
	first_node->next = *header;
	*header = first_node;
}

/* Insert a new node in a specific position */
void	ft_insert_after(t_node *prev_node, int value)
{
	t_node	*node_after;

	node_after = (t_node *) malloc(sizeof (t_node));
	node_after->nb = value;
	// Assign to the created node the value the previous node is pointing to
	node_after->next = prev_node->next;
	// The previous node should point to the new node created
	prev_node->next = node_after;
}

void	ft_print_list(t_node *node)
{
	while(node != NULL)
	{
		printf("%d - ", node->nb);
		node = node->next;
	}
	printf("\n");
}

//int main() {
//	// Creating the empty list
//	t_node *header = NULL;
//
//	// feeding the list with some values
//	ft_insert_node(&header, 6);
//	ft_insert_node(&header, 7);
//	ft_insert_node(&header, 8);
//	//New node to be inserted in the first position
//	ft_insert_first(&header, 9);
//	//New node to be added in the 4th position
//	ft_insert_after(header->next->next, 10);
//
//	// Printing the list
//	printf("Los valores de la lista son: ");
//	ft_print_list(header);
//
//	return 0;
//}
