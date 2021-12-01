#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of BT
 * @tree: pointer to the root node
 * Return: size of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t lh;

	if (!tree || tree->parent == NULL)
		return (0);
	lh = binary_tree_depth(tree->parent);
	return (lh + 1);
}
