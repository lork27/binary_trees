#include "binary_trees.h"
#include <stdio.h>
int tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - finds balance of a binary tree
 * @tree: pointer to the root node
 * Return: difference between height of two branches
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree_height(tree->right) - tree_height(tree->left));
}

/**
 * tree_height - finds height of branch
 * @tree: pointer to the root node
 * Return: height
 */
int tree_height(const binary_tree_t *tree)
{
	int lh;
	int rh;

	if (!tree || (tree->left == NULL && tree->right == NULL))
		return (0);
	lh = tree_height(tree->left);
	rh = tree_height(tree->right);

	printf("left height %d\n right height %d\n", lh, rh);

	if (lh >= rh)
		return (lh + 1);
	else
		return (rh + 1);
}
