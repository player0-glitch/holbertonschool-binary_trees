#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (!parent)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));
	if (!new_left)
		return (NULL);

	if (parent->left)
		{
			new_left->left = parent->left;
			parent->left->parent = new_left;
		}

	new_left->parent->left = new_left;
	new_left->n = value;
	return (new_left);
}
