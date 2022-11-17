#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: A pointer to the root node of the tree to count the number of nodes
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;
	binary_tree_t *lefty, *righty;

	lefty = tree->left;
	righty = tree->right;
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right !=  NULL)
		nodes += 2;
	else if (tree->left != NULL || tree->right != NULL)
		nodes += 1;
	if (nodes == 2)
	{
		if ((lefty->right || lefty->left) || (righty->right || righty->left))
			return (nodes + 1);
		else
			return (nodes);
	}
	if (nodes == 1)
	{
		if (tree->left == NULL && tree->right != NULL)
		{
			if (tree->right->left != NULL || tree->right->right != NULL)
				return (nodes + 1);
			else
				return (nodes);
		}
		else if (tree->right == NULL && tree->left != NULL)
		{
			if (tree->left->left != NULL || tree->left->right != NULL)
				return (nodes + 1);
			else
				return (nodes);
		}
	}
	return (0);
}
