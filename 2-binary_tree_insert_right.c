#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node on the right of the parent
 * @parent: parent node
 * @value: value for the new node
 * Return: address of the right-node created or null if fails.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);
	if (!(parent->right))
	{
		parent->right = binary_tree_node(parent, value);
	}
	else
	{
		tmp = parent->right;
		parent->right = binary_tree_node(parent, value);
		tmp->parent = parent->right;
		parent->right->right = tmp;
	}
	return (parent->right);
}
