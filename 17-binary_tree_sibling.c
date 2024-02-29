#include <stddef.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Function
 *
 * Description: function that finds the sibling of a node
 * (a node in the right/left side in the same level)
 *
 * @node: Pointer to the node to find the sibling
 *
 * Return: returns a pointer to the found sibling node
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
