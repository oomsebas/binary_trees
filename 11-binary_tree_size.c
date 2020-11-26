#include "binary_trees.h"


/**
 *binary_tree_subtrees - Measures the height of subtrees right and left
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the subtrees starting at @node
 */

static size_t binary_tree_subtrees(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);
	height_l = tree->left ? 1 + binary_tree_subtrees(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_subtrees(tree->right) : 0;
	return (height_l + height_r);
}

/**
 *binary_tree_size - Measures the size of a tree
 *
 * @tree: Pointer to the node to measures the size
 *
 * Return: The size of the tree starting at @node
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = binary_tree_subtrees(tree);
	return (height + 1);
}
