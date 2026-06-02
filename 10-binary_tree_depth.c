#include "binary_trees.h"

/**
 *binary_tree_depth - depth of the binary tree
 *@tree: pointer to the tree
 *
 * Return: depth of the tree or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);

	while (tree->parent)
		{
			d++;
			tree = tree->parent;
		}
	return (d);
}
