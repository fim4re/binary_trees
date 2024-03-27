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
	int lt = 0, rt = 0;

	if (tree)
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
			lt = binary_tree_is_full(tree->left);
			rt = binary_tree_is_full(tree->right);
			if (lt == 0 || rt == 0)
				return (0);
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
