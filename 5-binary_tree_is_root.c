#include "binary_trees.h"
/**
* binary_tree_is_root - Checks if a given node is a root
* @node: node pointer to check
* Return: 1 (if it's root), else 0
* If node is NULL, return 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
