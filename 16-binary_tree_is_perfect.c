#include "binary_trees.h"
/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to tree
* Return: size_t height of tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
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
 * binary_tree_is_perfect - function to check if a binary tree is perfect
 * @tree: pointer to the rood node of tree to check
 * Return: Null = 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		return (binary_tree_is_perfect(tree->left) ==
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
