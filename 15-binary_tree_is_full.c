#include "binary_trees.h"

/**
 * is_full - check if a node is leaf.
 * @node: node to check.
 * Return: 1 if is full, 0 if not.
 */
static int is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}


/**
 * binary_tree_is_full - check the tree is full
 * @tree: pointer to tree to check
 * Return: 1 if its full, 0 if not.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = is_leaf(tree) ? 1 : binary_tree_is_full(tree->left);
	right = is_leaf(tree) ? 1: binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
