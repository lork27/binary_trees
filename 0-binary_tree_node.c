#include "binary_trees.h"

/**
 *binary_tree_node - creates a node in a bt
 *@parent: pointer to the parent node to create
 *@value: value to put in the new node
 *Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_parent = malloc(sizeof(binary_tree_t));

	if (new_parent == NULL)
		return (NULL);
	new_parent->parent = parent;
	new_parent->left = NULL;
	new_parent->right = NULL;
	new_parent->n = value;
	return (new_parent);
}
