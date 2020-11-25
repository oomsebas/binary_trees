#include "binary_trees.h"

/**
 * binary_tree_node - create a tree node
 * @parent: node parent where the new child node will be created.
 * @value: numeric value to  contain in the node.
 * Return: pointer to the root of the tree.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
