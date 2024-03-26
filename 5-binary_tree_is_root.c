#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is root
 * @node: Node
 * Return: 0 if is not a root 1 if it is
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
