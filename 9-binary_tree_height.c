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
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	size_t height = MAX(left_height, right_height) + 1;

	return (height);
}
