#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: A pointer to the node to find the sibling
 * Return: Node sibling on success or NULL on fail
 */

binary_tree_t *binary_tree_uncle(const binary_tree_t *node)
{
	binary_tree_t *father, *uncle;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (!node->parent->parent->left)
		return (NULL);
	father = node->parent->parent->left;
	if (!node->parent->parent->right)
		return (NULL);
	uncle = node->parent->parent->right;
	if (father->n == node->parent->n)
		return (uncle);
	return (father);
}
