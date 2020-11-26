#include "binary_trees.h"

/**
 * is_leaf - check if a node is leaf.
 *@node: node to check.
 * Return: 1 if is leaf, 0 if not.
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
 * binary_tree_leaves - check the number of leaf nodes in a tree
 * @tree: pointer to tree to check
 * Return: the number of leaf nodes in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_l;
	size_t leaves_r;
	size_t root;

	if (tree == NULL)
		return (0);

	leaves_l = is_leaf(tree->left) ? 1 : binary_tree_leaves(tree->left);
	leaves_r = is_leaf(tree->right) ? 1 :  binary_tree_leaves(tree->right);
	root = is_leaf(tree);
	return (leaves_l + leaves_r + root);
}
