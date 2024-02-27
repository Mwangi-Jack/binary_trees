#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 *
 * @node: Pointer to the node to check
 *
 * Return: returns (1) if is a leaf otherwise it returns (0)
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}

	return (0);
}
