#include "binary_trees.h"

/**
 *binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree == NULL)
		return (0);

	height_l = tree->left ? binary_tree_height(tree->left) : 0;
	height_r = tree->right ? binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? 1 + height_l : 1 + height_r);
}

/**
 *binary_tree_balance - Measures the balance of a binary tree
 *
 * @tree: Pointer to the tree to measures the balance
 *
 * Return: The balance of the tree starting at @tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	return (height_l - height_r);

}
