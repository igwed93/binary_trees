#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as
 * the left child of another node.
 * @parent: the parent of the new node.
 * @value: the data of the new node.
 *
 * Return: the created node or Null if an error occurs.
 *
 * Author: Daniel Igwe.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp_node;

	if (parent == NULL)
		return (NULL);

	/* allocate memory for new node */
	tmp_node = malloc(sizeof(binary_tree_t));

	/* check that malloc didn't fail */
	if (tmp_node == NULL)
		return (NULL);

	tmp_node->n = value;
	tmp_node->left = NULL;
	tmp_node->right = NULL;
	tmp_node->parent = parent;

	if (parent->left)
	{
		tmp_node->left = parent->left;
		parent->left->parent = tmp_node;
		parent->left = tmp_node;
	}
	else
	{
		parent->left = tmp_node;
	}
	return (tmp_node);
}
