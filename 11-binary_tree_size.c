#include "binary_trees.h"

/**
* binary_tree_size - Measures size of BT
* @tree: Tree root pointer to measure size
* Return: size of node, else 0, if tree is NULL.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l_size, r_size;

	if (tree == NULL)
		return (0);
	l_size = binary_tree_size(tree->left);
	r_size = binary_tree_size(tree->right);
	return (l_size + r_size + 1);
}
