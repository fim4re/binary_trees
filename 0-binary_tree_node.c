#include "binary_trees.h"

/**
 * binary_tree_node - Create binary node
 * @parent: parent
 * @value: Value
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nd;

	new_nd = malloc(sizeof(binary_tree_t));
	if (new_nd == NULL)
		return (NULL);

	new_nd->n = value;
	new_nd->parent = parent;
	new_nd->left = NULL;
	new_nd->right = NULL;
	return (new_nd);
}
