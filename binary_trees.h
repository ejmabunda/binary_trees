#ifndef BINARY_TREES
#define BINARY_TREES

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

#endif

