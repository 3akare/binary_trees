#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: Node sibling on success or NULL on fail
 */

binary_tree_t *binary_tree_sibling(const binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->n == node->parent->left->n && node->parent->left != NULL)
		if (node->parent->right != NULL)
			return (node->parent->right);
	if (node->parent->left != NULL)
		return (node->parent->left);
	return (NULL);
}
