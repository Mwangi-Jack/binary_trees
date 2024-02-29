#include <stddef.h>
#include "binary_trees.h"


/**
 * tree_height - function
 *
 * Description: function that measures the height of
 * a binary tree
 *
 * @tree: pointer to the root node of the tree to measerue height
 *
 * Return: returns size_t value or 0
*/

size_t tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0;
	size_t left_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = tree->left ? 1 + tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + tree_height(tree->right) : 1;

	return (MAX(left_height, right_height));

}

/**
 * binary_tree_balance - function
 *
 * Description: Function to measure the balance factor of a
 *  binary tree
 *
 * @tree: Pointer to the root noe of the tree to be measured
 * the balance factor
 *
 * Return: returns an integer value i.e the balanced factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t balance_factor = 0, left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	balance_factor = left_height - right_height;
	return (balance_factor);
}
