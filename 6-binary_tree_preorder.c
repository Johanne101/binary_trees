#include "binary_trees.h"

/**
 * binary_tree_preorder - Function goes through binary tree
 * using pre-order traversal.
 * @tree: Root node ptr of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * If tree or func is NULL, do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
