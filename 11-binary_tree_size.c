#include <stddef.h>
#include "binary_trees.h"


/**
 * binary_tree_size - function
 *
 * Description: function that measures the size
 * of a binary tree
 *
 * @tree: Pointer to the root node of the tree to
 * measure the size
 *
 * Return: returns an integer value 0 or more
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t  size_left = 0;
	size_t size_right = 0;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	return (size_left + size_right + 1);
}
