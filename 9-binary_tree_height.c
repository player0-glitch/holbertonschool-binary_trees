#include "binary_trees.h"
/**
 *binary_tree_height- gets the height of the tree recursively
 *@tree: pointer to a tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;
	/*all the way to the left*/
	if (tree->left)
		{
			height_l = 1 + binary_tree_height(tree->left);
		}
	/*all the way to the right*/
	if (tree->right)
		{
			height_r = 1 + binary_tree_height(tree->right);
		}

	return (height_l > height_r ? height_l : height_r);
}
