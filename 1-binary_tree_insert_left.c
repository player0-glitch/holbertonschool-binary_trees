#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts value to the left child of the binary tree
 * @parent: parent of the tree
 * @value: value to be added in the tree
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (!parent)
		return (NULL);

	new_left = binary_tree_node(parent, value);

	if (!new_left)
		return (NULL);

	if (parent->left)
		{
			new_left->left = parent->left;
			parent->left->parent = new_left;
		}

	parent->left = new_left;
	new_left->n = value;
	return (new_left);
}
