#include "binary_trees.h"
/**
 * binary_tree_depth - Measures depth of a node in BT.
 * @tree: Node ptr to measure depth.
 * Return: 0, if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
