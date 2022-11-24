#include "binary_trees.h"

/**
 * binary_tree_uncle - searches for the uncle of a node.
 * @node: node to find the uncle.
 *
 * Return: pointer to the uncle node or NULL if an error occurs
 *
 * Author: Daniel Igwe.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	if (!node || !node->parent->parent)
		return (NULL);

	grand_parent = node->parent->parent;

	if (!grand_parent->left || !grand_parent->right)
		return (NULL);
	return (grand_parent->left == node->parent ?
		grand_parent->right : grand_parent->left);
}
