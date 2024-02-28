#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function
 *
 * Description: function that counts the leaves
 * (nodes with no child nodes)  in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the
 *  number of leaves
 *
 * Return: returns an integer value i.e number of leaves
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		leaves += 1;

	if (tree->right != NULL)
		leaves += 1;

	return (leaves);
}
