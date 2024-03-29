#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left -  function
 *
 * Description: function to insert node as  the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: returns pointer to the created node or NULL if fail
 *
*/


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *prev_node;


	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->right = NULL;
	new_node->parent = parent;

	if (parent->left != NULL)
	{
		prev_node = parent->left;
		parent->left = new_node;
		prev_node->parent = new_node;
		new_node->left = prev_node;
	} else
	{
		new_node->left = NULL;
	}

	parent->left = new_node;
	return (new_node);
}
