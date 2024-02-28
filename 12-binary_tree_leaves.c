#include <stddef.h>
#include <stdio.h>
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
	size_t leaf = 0, r_leaf = 0, l_leaf = 0;

	if (tree == NULL)
		return (0);

	l_leaf = binary_tree_leaves(tree->left);
	r_leaf = binary_tree_leaves(tree->right);

	leaf = l_leaf + r_leaf;
	return ((!l_leaf && !r_leaf) ? leaf + 1 : leaf);
}
