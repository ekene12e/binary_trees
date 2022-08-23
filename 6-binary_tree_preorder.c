#include "binary_trees.h"
/**
 * binary_tree_preorder - transverses a binary tree
 * @tree: tree to be preordered
 * @func: function to be called on each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
	}
}

