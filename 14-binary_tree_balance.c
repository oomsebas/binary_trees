#include "binary_trees.h"

/**
 *binary_tree_balance - Measures the balance of a binary tree
 *
 * @tree: Pointer to the tree to measures the balance
 *
 * Return: The balance of the tree starting at @tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l;
	int height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
	return (height_l - height_r);
}
