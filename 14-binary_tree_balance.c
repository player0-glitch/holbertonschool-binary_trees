#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_balance - finds the balance factor of a tree
 * height(left_subtree)-height(right_subtree)
 * @tree: pointer to the tree
 *
 * Return: balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hl, hr;

	if (!tree)
		return (0);

	hl = binary_tree_height(tree->left);
	hr = binary_tree_height(tree->right);

	return ((int)(hl - hr));
}
