#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of the node
 * @node: pointer to the node
 *
 * Return: uncle node;
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	binary_tree_t *grandparent;

	if (!node || !node->parent)
		return (NULL);

	grandparent = node->parent->parent;

	if (!grandparent)
		return (NULL);

	if (grandparent->left == node->parent)
		return (grandparent->right);

	return (grandparent->left);
}
