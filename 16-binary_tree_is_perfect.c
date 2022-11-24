#include "binary_trees.h"


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree.
 *
 * Return: 1 if perfect or 0 otherwise.
 *
 * Author: Daniel Igwe.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_balance(tree) != 0)
		return (0);
	if (tree->left && tree->right)
	{
		left = binary_tree_is_perfect(tree->left);
		right = binary_tree_is_perfect(tree->right);
		return (left && right);
	}
	return (0);
}

/**
 * binary_tree_balance - checks to see if a binary tree is balanced.
 * @tree: pointer to the tree to measure
 *
 * Return: if tree is weighted left, return positive
 *         if tree is weighted right, return negative.
 *         if tree is balanced, return 0..
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	/* an empty tree */
	if (tree == NULL)
		return (0);

	left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right = tree->right ? binary_tree_height(tree->right) + 1 : 0;
	return (left - right);
}


/**
 * binary_tree_height - function that measures the depth of a tree
 * @tree: pointer to the root node of the tree to measure.
 *
 * Return: the depth of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	return (right > left ? right : left);
}
