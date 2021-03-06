#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: pointer to the root node
 * Return: number of nodes with childs
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (!tree)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right) + 1);
	}
	else
		return (0);
}
