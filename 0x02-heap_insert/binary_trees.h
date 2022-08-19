#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>
#include <stddef.h>

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

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
int size(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
void sort_binary_tree(heap_t **new);
heap_t *parent_address(heap_t *root);
heap_t *heap_insert(heap_t **root, int value);
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s);
static size_t _height(const binary_tree_t *tree);
void binary_tree_print(const binary_tree_t *tree);
#endif /* _BINARY_TREES_H_ */