#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with at least 1 child in BT
 * @tree: Tree root pointer to count number of nodes
 * Return: n of childs in BT, else 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	else
		return (0);
}
