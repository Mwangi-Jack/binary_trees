#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - function
 *
 * Description: Function that checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: returns an integer value i.e true (1) false (0)
*/


int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		int left = binary_tree_is_full(tree->left);
		int right = binary_tree_is_full(tree->right);

		if (left == 0 || right == 0)
			return (0);

		return (1);
	} else if (!tree->left && !tree->right)
	{
		return (1);
	}

	return (0);
}
