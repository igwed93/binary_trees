#include "binary_trees.h"

int binary_height(const binary_tree_t *node, int count);

/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree.
 * @tree: pointer to the root node.
 * Return: the balance factor or 0 if tree is NULL.
 *
 * Author: Daniel Igwe.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance = 0;
	int right_balance = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_balance = binary_height(tree->left, 1);
	if (tree->right)
		right_balance = binary_height(tree->right, 1);

	return (left_balance - right_balance);
}


/**
 * binary_height - measures the height of a tree.
 * @node: the pointer to the subtree to measure.
 * @count: counter of height.
 *
 * Return: height
 */
int binary_height(const binary_tree_t *node, int count)
{
	int count_l = 0, count_r = 0;

	if (node->left)
		count_l = binary_height(node->left, count + 1);
	if (node->right)
		count_r = binary_height(node->right, count + 1);

	if (!node->left && !node->right)
		return (count);

	if (count_l > count_r)
		return (count_l);
	else
		return (count_r);
}
