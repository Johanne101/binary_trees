#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to tree
* Return: size_t height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0;
	size_t r_height = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL) && (tree->right != NULL))
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height >= r_height)
	{
		return (l_height + 1);
	}
	return (r_height + 1);
}
/**
 * binary_tree_balance - Func measures balance factor of BT
 * @tree: Tree root ptr to measure balance factor
 * Return: Balance factor of BT, else 0, if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
