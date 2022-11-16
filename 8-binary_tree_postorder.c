#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree
 * using the postorder traversal
 *
 * @func: A pointer to the root node of the tree
 * @tree: A pointer to the root node of the tree to traverse
 */

void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
