#include "binary_trees.h"
#include <stddef.h>

/**
 *binary_tree_sibling - return the sibling of a node or null
 *@node: node to find the sibling of
 *
 * Return: null on failure or sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
