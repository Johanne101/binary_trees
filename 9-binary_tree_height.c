#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to tree
* Return: size_t height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height >= r_height)
	{
		return (l_height + 1);
	}
	return (r_height + 1);
}
