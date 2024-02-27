#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - function
 *
 * Description: function that inserts node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: Integer value to store in the new node
 *
 * Return: returns a pointer to the new node or NULL if fail
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *prev_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->left = NULL;
	new_node->parent = parent;

	if (parent->right != NULL)
	{
		prev_node = parent->right;
		parent->right = new_node;
		prev_node->parent = new_node;
		new_node->right = prev_node;
	} else
	{
		new_node->right = NULL;
	}

	parent->right = new_node;

	return (new_node);
}
