#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_preorder - Traverses a binary tree pre-order traversal.
 * @tree: Pointer to the root node.
 * @func: Pointer to a function to call for each node.
 *
 * Return: This function does not return any value.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
