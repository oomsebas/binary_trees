#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node on the left.
 * @parent: node parent where to insert
 * @value: the value to insert
 * Return: pointer to the address of the node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	if (!parent)
		return (NULL);
	if (!(parent->left))
	{
		parent->left = binary_tree_node(parent, value);
	}
	else
	{
		tmp = parent->left;
		parent->left = binary_tree_node(parent, value);
		tmp->parent = parent->left;
		parent->left->left = tmp;
	}
	return (parent->left);
}
