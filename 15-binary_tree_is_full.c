#include "binary_trees.h"

/**
 * binary_tree_is_full - if binary tree is full.
 * @tree: pointer root
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		else if (tree->left && tree->right)
		{
			left = binary_tree_is_full(tree->left);
			right = binary_tree_is_full(tree->right);
			if (left == 0 || right == 0)
			{
				return (0);
			}
			return (1);
		}
	}
}
