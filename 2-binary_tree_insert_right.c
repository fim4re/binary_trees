#include "binary_trees.h"
/**
 * binary_tree_insert_right - add a node in the right of parent
 * @parent: parent
 * @value: value
 * Return: NULL if it fails or the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nd;

	if (parent == NULL)
		return (NULL);

	new_nd = binary_tree_node(parent, value);
	if (new_nd == NULL)
		return (NULL);

	if (parent->right)
	{
		new_nd->right = parent->right;
		parent->right->parent = new_nd;
	}
	parent->right = new_nd;
	return (new_nd);
}
