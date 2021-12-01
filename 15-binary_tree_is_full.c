#include "binary_trees.h"
/**
 *binary_tree_is_full - checks if BT is full
 *@tree: BT root node to be checked
 *Return: if tree is NULL return 0 of it is full return 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
