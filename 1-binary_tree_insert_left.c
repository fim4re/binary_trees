#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of parent
 * @parent: parent
 * @value: value
 * Return: NULL if it fails or the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nd;

	if (parent == NULL)
		return (NULL);

	new_nd = binary_tree_node(parent, value);
	if (new_nd == NULL)
		return (NULL);

	if (parent->left)
	{
		new_nd->left = parent->left;
		parent->left->parent = new_nd;
	}
	parent->left = new_nd;
	return (new_nd);
}
