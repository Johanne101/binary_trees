#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - Insert a node at left side of binary tree
* @parent: Pointer to parent
* @value: The value to insert in node
* Return: Left new node pointer
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	left_node = binary_tree_node(parent, value);
	if (left_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		left_node->left = parent->left;
		left_node->left->parent = left_node;
	}
	parent->left = left_node;

	return (left_node);
}
