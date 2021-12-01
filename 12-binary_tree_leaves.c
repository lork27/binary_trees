#include "binary_trees.h"

/**
 * binary_tree_leaves - measures  of BT
 * @tree: pointer to the root node
 * Return: size of tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
