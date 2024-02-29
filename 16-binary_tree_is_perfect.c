#include <stddef.h>
#include <stdio.h>
#include "binary_trees.h"


/**
 * binary_is_full - check if binary tree is full
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: returns an integer value true (1)  or false (0)
*/

int binary_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		int left = binary_is_full(tree->left);
		int right = binary_is_full(tree->right);

		if (left == 0 || right == 0)
		{
			return (0);
		}

		return (1);
	} else if (!tree->left && !tree->right)
	{
		return (1);
	}

	return (0);
}
/**
 * binary_tree_is_perfect - Function
 *
 * Description: function that checks if a binary tree is perfect
 * (A perfect binary tree has all leaf nodes at the same level)
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: returns an integer value true (1) false (0)
 *
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int full = binary_is_full(tree);

	if (full == 0)
		return (0);

	int left = tree->parent ? binary_tree_is_perfect(tree->left) : 0;
	int right = tree->parent ? binary_tree_is_perfect(tree->right) : 0;

	printf("left: %d -> rightg: %d\n", left, right);

	return ((left < right) ? left : right);
}
