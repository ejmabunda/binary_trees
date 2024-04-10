#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal.
 * @tree: Pointer to the root of the tree.
 * @func: Pointer to the function to call on each node.
 *
 * Return: This function does not return any value.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
