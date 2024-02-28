#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - function
 *
 * Description: function that counts the nodes with
 *  atleast 1 child in a binary tree
 *
 * @tree: Pointer to the roo t node of the tree to
 *  count the number of nodes
 *
 * Return: returns an integer value
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	size_t left = binary_tree_nodes(tree->left);
	size_t right =  binary_tree_nodes(tree->right);

	nodes = left + right;

	return ((tree->left || tree->right) ? nodes + 1 : nodes);
}
