#include <stddef.h>
#include "binary_trees.h"

/**
 * is_perfect - function to check binary tree perfection
 *
 * @tree: pointer to binary tree node to check
 *
 * Return: returns an integer value true (1) false (0)
*/

int is_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + is_perfect(tree->left);
		right = 1 + is_perfect(tree->right);

		if (left == right && left != 0 && right != 0)
			return (left);

		return (0);
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
	int res = 0;

	if (tree == NULL)
		return (0);

	res = is_perfect(tree);

	return (res != 0 ? 1 : 0);

}
