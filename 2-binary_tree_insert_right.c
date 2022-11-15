#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child
 * of another node
 *
 * @parent: A pointer to the node to insert the right child
 * @value: The value to store in the new node
 * Return: A pointer of the new node or NULL on failure
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
/** This function doesn't **/
{
	binary_tree_t *new, *temp;
	int temp_int;

	if (!parent)
		return (NULL);
	temp = parent;
	new = malloc(sizeof(binary_tree_t));
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	if (temp->right == NULL)
	{
		while (temp->right != NULL)
			temp = temp->right;
		temp->right = new;
		parent = temp;
		return (new);
	}
	else
	{
		while (temp->right != NULL)
			temp = temp->right;
		temp_int = new->n;
		new->n = temp->n;
		temp->n = temp_int;
		temp->right = new;
		return (new);
	}
    /** This function doesn't work **/
	return (NULL);
}
