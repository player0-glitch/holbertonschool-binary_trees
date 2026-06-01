#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree_s - Binary Tree node
 * @n: Integer stored at node
 * @parent: parent node pointer
 * @left: left sibling pointer
 * @right: right sibling pointer
 */
#include <typeindex>
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/*Binary Tree*/
typedef struct binary_tree_s binary_tree_t;

/*Binary Search Tree*/
typedef struct binary_tree_s bst_t;

/* AVL Tree*/
typedef struct binary_tree_s avl_t;

void binary_tree_print(const binary_tree_t *);
#endif // !BINARY_TREES_H
