#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 *
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: returns nothing (Void)
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		free(tree->left);
		binary_tree_delete(tree->right);
	}
}
