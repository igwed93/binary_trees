#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: node to find the sibling thereof.
 *
 * Return: pointer to the sibling node.
 *
 * Author: Daniel Igwe.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if (!parent->left && !parent->right)
		return (NULL);
	return (parent->left == node ? parent->right : parent->left);
}
