#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes the tree.
 *
 * @tree: the pointer to the root node of the tree to delete.
 *
 * Return: Nothing.
 *
 * Author: Daniel Igwe.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		/* delete both subtrees */
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
