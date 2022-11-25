#include "binary_trees.h"

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

	if (first->parent == second->parent)
		return (first->parent);

	if (first == second->parent)
		return (second->parent);

	if (second == first->parent)
		return (first->parent);

	lowestAncestor = binary_trees_ancestor(first->parent, second);
	lowestAncestor = binary_trees_ancestor(first, second->parent);

	return (lowestAncestor);
}
