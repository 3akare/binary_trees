#include "binary_trees.h"

/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */

void print_num(int n)
{
	printf("%d\n", n);
}


/**
 * binary_tree_preorder - Goes through a binary tree
 * using the pre-order traversal
 *
 * @func: A pointer to the root node of the tree
 * @tree: A pointer to the root node of the tree to traverse
 */

void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
