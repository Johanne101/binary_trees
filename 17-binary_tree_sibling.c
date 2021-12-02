#include "binary_trees.h"
/**
 * binary_tree_sibling - function finds a sibling of the node
 * @node: node pointer to find the sibling
 * Return: pointer to sibling node, else NULL
 * If node or parent is NULL, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
