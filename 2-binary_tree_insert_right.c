#include "binary_trees.h"

/**
 *binary_tree_insert_right - insert node as the right child of another node
 *@parent: pointer to the node to insert the left cheld in
 *@value: to insert to the node
 *Return: created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right = NULL;

	if (parent == NULL)
		return (NULL);

	new_right = binary_tree_node(parent, value);
	if (new_right == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right->parent = new_right;
	}
	parent->right = new_right;
	return (new_right);
}
