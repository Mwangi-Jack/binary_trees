#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - function
 *
 * Description: Function that goes through a binary
 * tree using in-order traversal
 *
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node
 *
 * Return: returns nothing (void)
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

}
