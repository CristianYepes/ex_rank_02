
/*sort_list recorre una lista enlazada y ordena sus elementos usando una función de comparación (cmp).
Si dos elementos no están en orden, intercambia sus valores (data) y vuelve al inicio.
Así, garantiza que toda la lista quede ordenada según el criterio definido por cmp.
La función devuelve el primer nodo de la lista ya ordenada.*/


typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*start = lst;
	int		swap;

	while (lst && lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return (start);
}
