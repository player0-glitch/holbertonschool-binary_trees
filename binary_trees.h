#ifndef BINARY_TREES_H
#define BINARY_TREES_H

/**
 * struct binary_tree_s - Binary Tree node
 * @n: Integer stored at node
 * @parent: parent node pointer
 * @left: left sibling pointer
 * @right: right sibling pointer
 */
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

/*helper*/
void binary_tree_print(const binary_tree_t *);

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
#endif /* !BINARY_TREES_H*/
