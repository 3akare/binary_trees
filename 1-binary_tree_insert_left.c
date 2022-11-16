#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child
 * of another node
 *
 * @parent: A pointer to the node to insert the left child
 * @value: The value to store in the new node
 * Return: A pointer of the new node or NULL on failure
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
