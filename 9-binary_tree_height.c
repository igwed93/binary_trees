#include "binary_trees.h"

/**
 * binary_tree_height - function that measurers the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the tree or 0 is tree is NULL.
 *
 * Author: Daniel Igwe.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height, left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (right > left)
		height = right;
	else
		height = left;

	return (height);
}
