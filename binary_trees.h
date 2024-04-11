#ifndef BINARY_TREES
#define BINARY_TREES

#include <stdlib.h>

/* Type declarations here */
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/* Basic binary tree */
typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* Function prototypes here */

/* Prints a binary tree */
void binary_tree_print(const binary_tree_t *tree);

/* Creates a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Inserts node as left-child of another node */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* Inserts node a right-child of another node. */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* Deletes a binary tree */
void binary_tree_delete(binary_tree_t *tree);

/* Checks if a node is a leaf */
int binary_tree_is_leaf(const binary_tree_t *node);

/* Checks if a node is root */
int binary_tree_is_root(const binary_tree_t *node);

/* Goes through a binary tree using pre-order traversal */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* Goes through a binary tree using in-order traversal */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* Goes through a binary tree using post-order traversal */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* Measures the height of a binary tree */
size_t binary_tree_height(const binary_tree_t *tree);

/* Looks for the greater value */
size_t max(size_t a, size_t b);

/* Measures the depth of a tree */
size_t binary_tree_depth(const binary_tree_t *tree);

/* Measures the size of the tree */
size_t binary_tree_size(const binary_tree_t *tree);

/* Increment a value by 1 */
void increment(binary_tree_t *node, size_t size);

/* Counts the leaves in a binary tree */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* Counts the nodes with at least 1 child in a binary tree*/
size_t binary_tree_nodes(const binary_tree_t *tree);

#endif
