#include "binary_trees.h"
#include <stddef.h>
/**
 *binary_tree_is_leaf - checks if the binary tree is a leaf
 *
 * @node: node in the binary tree
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
