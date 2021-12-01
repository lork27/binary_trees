#include "binary_trees.h"
int branch_depth(const binary_tree_t *tree);
int actual_perfect(const binary_tree_t *tree, int d, int level);
/**
 * binary_tree_is_perfect - finds balance of a binary tree
 * @tree: pointer to the root node
 * Return: difference between height of two branches
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	if (tree == NULL)
		return (0);
	d = branch_depth(tree->left);
	return (actual_perfect(tree, d, 1));
}

/**
 *branch_depth - returns left branch depth
 *@tree: root node of branch
 *Return: depth of branch
 */

int branch_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 *actual_perfect - where I actually check if its perfect
 *@tree: root node of bt
 *@d: length of left branch
 *@level: starts a 0 counts traversal
 *Return: 1 if perfect 0 if not
 */

int actual_perfect(const binary_tree_t *tree, int d, int level)
{
	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (d == level - 1);

	return (actual_perfect(tree->left, d, level + 1) ==
			actual_perfect(tree->right, d, level + 1));
}
