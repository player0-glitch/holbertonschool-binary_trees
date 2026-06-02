#include "binary_trees.h"

/**
 * binary_tree_preorder - prints binary tree in roots, left, right
 *
 * @tree: binary tree
 * @func: function pointer pointer to function used for print
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
