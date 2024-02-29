#include <stddef.h>
#include "binary_trees.h"

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

	left_height = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	balance_factor = left_height - right_height;
	return (balance_factor);
}
