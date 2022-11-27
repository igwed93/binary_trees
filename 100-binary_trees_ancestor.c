#include "binary_trees.h"
binary_tree_t *findAncestor(const binary_tree_t *first, const binary_tree_t *second);

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: node to measure the depth
 * Return: the depth of the node or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes.
 * @first: first node
 * @second: second node
 *
 * Return: pointer to the lowest common ancestor
 *
 * Author: Daniel Igwe.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *lowestAncestor;

	if (!first || !second)
		return (NULL);
	if (first == second)
	{
		lowestAncestor = (binary_tree_t *)first;
		return (lowestAncestor);
	}

	if (first->parent == second->parent)
		return (first->parent);

	if (first == second->parent)
		return (second->parent);

	if (second == first->parent)
		return (first->parent);

	lowestAncestor = binary_trees_ancestor(first->parent, second);
	lowestAncestor = binary_trees_ancestor(first, second->parent);

	if (lowestAncestor == NULL)
		lowestAncestor =  findAncestor(first, second);

	return (lowestAncestor);
}


/**
 * findAncestor - finds the ancestor of a node
 * @first: first node
 * @second: second node
 * Return: the lowest common ancestor
 */
binary_tree_t *findAncestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *lowestAncestor;
	size_t depth_A, depth_B, step;

	depth_A = binary_tree_depth(first);
	depth_B = binary_tree_depth(second);
	step = depth_A; /*if nodes have equal depths*/

	step = depth_A < depth_B ? step : depth_B;

	if (step == depth_A)
		lowestAncestor = first->parent;
	else
		lowestAncestor = second->parent;
	while (step && lowestAncestor->parent)
	{
		lowestAncestor = lowestAncestor->parent;
		step--;
	}
	return (lowestAncestor);
}
