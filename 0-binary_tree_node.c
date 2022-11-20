#include "binary_trees.h"


/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: pointer to the parent node of the node to create.
 * @value: the value to put in new node
 * Return: pointer to the new node or NULL on failurue
 *
 * Author: Daniel Igwe
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	/* verify that malloc didn't fail */
	if (new_node == NULL)
		return (NULL);
	new_node->n  = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;

	return (new_node);
}
