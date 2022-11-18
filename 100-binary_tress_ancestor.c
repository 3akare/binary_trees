#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the root node of the binary tree
 * @second: Pointer to the root node of the binary tree
 * Return: Return 0 if tree is NULL
 */

binary_tree_t *binary_trees_ancestor(binary_tree_t *first, binary_tree_t *second)
{
	int f_count = 0, s_count = 0, i = 0, j = 0;
	binary_tree_t *tmp, *tmp2;
	binary_tree_t *ret;
	int *first_arr, *second_arr;

	if (!first || !second)
		return (NULL);
	tmp = first;
	tmp2 = second;
	ret = first;
	
	while (first != NULL)
	{
		f_count++;
		first = first->parent;
	}
	while (second != NULL)
	{
		s_count++;
		second = second->parent;
	}
	first_arr = malloc(sizeof(f_count));
	second_arr = malloc(sizeof(s_count));
	while (tmp != NULL)
	{
		first_arr[i] = tmp->n;
		i++;
		tmp = tmp->parent;
	}
	while (tmp2 != NULL)
	{
		second_arr[j] = tmp2->n;
		j++;
		tmp2 = tmp2->parent;
	}
	for (i = 0; i < f_count; i++)
	{
		for (j = 0; j < s_count; j++)
		{
			if (first_arr[i] == second_arr[j])
			{
				while (ret != NULL)
				{
					if (ret->n == first_arr[i])
					{
						free(first_arr);
						free(second_arr);
						return (ret);
					}
					ret = ret->parent;
				}
			}
		}
	}
	free(first_arr);
	free(second_arr);
	return (NULL);
}
