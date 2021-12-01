#include "binary_trees.h"

/**
 * binary_tree_size - measures depth of BT
 * @tree: pointer to the root node
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeL;
	size_t sizeR;

	if (!tree)
		return (0);
	sizeL = binary_tree_size(tree->left);
	sizeR = binary_tree_size(tree->right);
	return (sizeL + sizeR + 1);
}
