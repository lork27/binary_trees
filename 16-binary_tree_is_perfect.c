#include "binary_trees.h"
#include <stdio.h>
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - finds balance of a binary tree
 * @tree: pointer to the root node
 * Return: difference between height of two branches
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
			return (1);
		else
			return (0);
	}
	return (0);
}
/**
 * binary_tree_height - measures height of BT
 * @tree: pointer to the root node
 * Return: size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh;
	size_t rh;

	if (!tree)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh >= rh)
		return (lh + 1);
	else
		return (rh + 1);
}
