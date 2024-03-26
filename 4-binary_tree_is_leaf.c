#include "binary_trees.h"
/**
 * binary_tree_is_leaf - know if a node is  leaf
 * @node: node
 * Return: 1 if it is a leaf or 0 if it is not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
