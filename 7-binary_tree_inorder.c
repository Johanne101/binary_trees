#include "binary_trees.h"
/**
 * binary_tree_inorder - Goes through binary tree
 *                       using in-order transversal.
 * @tree: Binary tree root to traverse
 * @func: Function ptr to call each node
 * Value of node is passed as a parameter to this function.
 * If tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
