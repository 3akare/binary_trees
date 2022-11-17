#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary factor
 *
 * @tree: A pointer to the root node of the tree to check
 * Return: int
 */

/** doesn't work properly*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = binary_tree_height(tree->left);
	int right = binary_tree_height(tree->right);

	return (left - right);
}
