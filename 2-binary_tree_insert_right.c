#include "binary_trees.h"
#include <stddef.h>

/**
* binary_tree_insert_right - Insert a node at left side of binary tree
* @parent: Pointer to parent
* @value: The value to insert in node
* Return: right new node pointer
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;

	if (parent == NULL)
		return (NULL);
	right_node = malloc(sizeof(binary_tree_t));
	if (right_node == NULL)
		return (NULL);

	right_node->n = value;
	right_node->parent = parent;
	right_node->left = NULL;

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		parent->right = right_node;
	}
	parent->right = right_node;
	return (right_node);
}
