#include "binary_trees.h"

/**
 * is_node - check if a node is leaf.
 *@node: node to check.
 * Return: 1 if is node with at least onw child, 0 if not.
 */
static int is_node(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (1);
	return (0);
}

/**
 * binary_tree_nodes - check the number of  nodes in a tree with at least one
 * child
 * @tree: pointer to tree to check
 * Return: the number of nodes in the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leaves_l;
	size_t leaves_r;
	size_t root;

	if (tree == NULL)
		return (0);

	root = is_node(tree);
	leaves_l = is_node(tree->left) ? binary_tree_nodes(tree->left) : 0;
	leaves_r = is_node(tree->right) ? binary_tree_nodes(tree->right) : 0;

	return (leaves_l + leaves_r + root);
}
