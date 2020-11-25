#include "binary_trees.h"


/**
 * binary_tree_preorder - traverse tree in a preorder manner
 * @tree: the root node of the tree to print
 * @func: print function
 * Return: None;
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
