#include "binary_trees.h"

/**
 * binary_tree_inorder - prints tree in left -> root -> right
 * @tree: tree
 *
 * @func: function pointer pointer to function used for print
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
