#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: input node
 * Return: 1 for leaf or 0
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right || node->left)
		return (0);

	return (1);
}
