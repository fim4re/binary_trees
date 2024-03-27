#include "binary_trees.h"
/**
 * tree_is_perfect - if a tree is perfect or not
 * @tree: tree
 * Return: 0 if is not a perfect or other number
*/
int tree_is_perfect(const binary_tree_t *tree)
{
	int lt = 0, rt = 0;

	if (tree->left && tree->right)
	{
		lt = 1 + tree_is_perfect(tree->left);
		rt = 1 + tree_is_perfect(tree->right);
		if (rt == lt && rt != 0 && lt != 0)
			return (rt);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - perfect a tree
 * @tree: tree
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		res = tree_is_perfect(tree);
		if (res != 0)
		{
			return (1);
		}
		return (0);
	}
}
