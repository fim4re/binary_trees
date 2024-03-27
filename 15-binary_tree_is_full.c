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
	if (tree == NULL)
		return (0);

	else
	{
		if (!tree->left && !tree->right)
			return (1);
		else if (tree)
		{
			if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
		}
	}
}
