#include "binary_trees.h"
/**
 *binary_tree_is_full - checks if BT is full
 *@tree: Tree root ptr to check
 *Return: 1 if full, else, if tree is NULL return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* check if BT is empty*/
	if (tree == NULL)
		return (0);
	/* check for leaf*/
	/*if (tree->left && tree->right)return (1);*/
	if (!(tree->right) && !(tree->left))
		return (1);
	/* */
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
