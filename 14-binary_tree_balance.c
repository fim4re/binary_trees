#include "binary_trees.h"

/**
 * binary_tree_balance - balance factor of a binary tree.
 * @tree: pointer tree
 *
 * Return: If tree is NULL return 0, else balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int t = 0, first = 0, second = 0;
	
	if (tree)
	{
		first = (binary_tree_height(tree->left);
		second = binary_tree_height(tree->right));
		t = first - second;
	}
	return (t);
}

/**
 * binary_tree_height -  height of a binary tree.
 * @tree: A pointer tree
 * Return: If tree is NULL return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else
	{
		size_t l = 0;
		size_t r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
}
