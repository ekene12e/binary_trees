#include "binary_trees.h"
/**
 * binary_tree_inorder - transverses a binary tree
 * @tree: tree to be transverses
 * @func: function to be called on each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
	}
}

