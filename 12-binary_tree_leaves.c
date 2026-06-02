#include "binary_trees.h"

/**
 *binary_tree_leaves - get the number of leaves
 *@tree:pointet to the parent
 *
 * Return: number of leaves of 0 if empty
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
