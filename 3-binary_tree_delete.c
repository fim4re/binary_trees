#include "binary_trees.h"
/**
 * binary_tree_delete - DELETE BINARY TREE
 * @tree: tree to free
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}

}
