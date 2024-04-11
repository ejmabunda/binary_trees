#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the
 * balance factor.
 *
 * Return: Balance factor of @tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
		binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Measures the hieght of a binary tree.
 * @tree: Pointer to the root of the tree.
 *
 * Return: The height of a binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return 0;
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		return max(left_height, right_height) + 1;
	}
}

size_t max(size_t a, size_t b) { return (a > b) ? a : b; }
