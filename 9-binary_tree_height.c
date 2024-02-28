#include <stddef.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - function
 *
 * Description: function that measures the height of
 * a binary tree
 *
 * @tree: pointer to the root node of the tree to measerue height
 *
 * Return: returns size_t value or 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0;
	size_t left_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree)
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	}
	return (MAX(left_height, right_height));

}
