#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if a given node is a root
 *
 * @node: Pointer to the node to check
 *
 * Return: returns (1)  if is root otherwise (0)
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
	}

	return (0);
}
