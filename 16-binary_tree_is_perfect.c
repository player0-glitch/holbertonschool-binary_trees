#include "binary_trees.h"
#include <math.h>
#include <stddef.h>
static int perfect_check(const binary_tree_t *tree, size_t expected_depth,
			 size_t current_depth)
{
	if (!tree->left && !tree->right)
		return (current_depth == expected_depth);

	if (!tree->left || !tree->right)
		return (0);

	return (perfect_check(tree->left, expected_depth, current_depth + 1) &&
		perfect_check(tree->right, expected_depth, current_depth + 1));
}

static size_t left_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree->left)
		{
			depth++;
			tree = tree->left;
		}

	return (depth);
}
/**
 * binary_tree_is_perfect- checks if tree is a perfect binary tree
 * @tree: pointer to the tree
 *
 * Return: 1 for perfect and 0 for not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	depth = left_depth(tree);
	return (perfect_check(tree, depth, 0));
}
