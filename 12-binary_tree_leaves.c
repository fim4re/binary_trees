#include "binary_trees.h"
/**
 * binary_tree_leaves - number of leaves in a tree
 * @tree: tree
 * Return: number leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaff = 0;

	if (tree)
	{
		leaff += (!tree->left && !tree->right) ? 1 : 0;
		leaff += binary_tree_leaves(tree->left);
		leaff += binary_tree_leaves(tree->right);
	}
	return (leaff);
}
