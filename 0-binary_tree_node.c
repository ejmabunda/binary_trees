#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Points to the parent node of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: Pointer to new node, NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node)
	{
		node->n = value;
		node->left = NULL;
		node->right = NULL;
		node->parent = parent;

		return (node);
	}
	else
	{
		return (NULL);
	}
}
