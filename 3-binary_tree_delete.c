#include "binary_trees.h"

/**
 * binary_tree_delete - delete all nodes of a binary tree
 * @tree: root node
 * Return: None.
 */
void binary_tree_delete(binary_tree_t *tree)
{
       	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}

}
