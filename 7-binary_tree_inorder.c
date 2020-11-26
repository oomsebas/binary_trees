#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse tree in a preorder manner
 * @tree: the root node of the tree to print
 * @func: print function
 * Return: None;
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree != NULL)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}

}
