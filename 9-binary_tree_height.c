#include "binary_trees.h"

/**
 * binary_tree_height - measures height of BT
 * @tree: pointer to the root node
 * Return: size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh;
	size_t rh;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	if (lh >= rh)
		return (lh + 1);
	else
		return (rh + 1);
}
