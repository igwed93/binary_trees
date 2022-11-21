#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf.
 * @node: node to be checked.
 *
 * Return: 1 if node is a leaf, otherwise 0.
 *
 * Author: Daniel Igwe.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	return (0);
}
