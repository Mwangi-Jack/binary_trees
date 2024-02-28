#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function
 *
 * Description: function that measures the
 * depth of a node in a binary tree
 *
 * @tree: Pointer to the nodt to measure depth
 *
 * Return: returns an integer value
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth = 0;
	size_t right_depth = 0;

	if (tree == NULL)
		return (0);


	left_depth = tree->parent ? 1 + binary_tree_depth(tree->left) : 0;
	right_depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (MAX(left_depth, right_depth));

}
