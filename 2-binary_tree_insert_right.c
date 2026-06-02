#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (!parent)
		return (NULL);

	new_right = malloc(sizeof(binary_tree_t));
	if (!new_right)
		return (NULL);

	new_right->n = value;
	/*for the case where parent already has a right child*/
	if (parent->right)
		{
			new_right->right = parent->right;
			parent->right->parent = new_right;
		}
	parent->right = new_right;
	return (new_right);
}
