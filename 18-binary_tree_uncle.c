#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/**
 *binary_tree_uncle - returns uncle of given node
 *@node: to be checked
 *Return: uncle of given node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling - gets sibling node
 * @node: pointer to node
 * Return: sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
