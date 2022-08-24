#include "binary_trees.h"

/**
 * binary_tree_leaves - Measures the no of leaves of a binary tree.
 * @tree: A pointer to the node of the tree to measure the leaf no.
 *
 * Return: If tree is NULL, your function must return 0, else return leaf no.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num_leaf = 0;

	if (tree == NULL)
		return (0);

	num_leaf += (binary_tree_leaves(tree->right)
	+ binary_tree_leaves(tree->left));

	if ((tree->left == NULL) && (tree->right == NULL))
	{
		num_leaf = 1;
		return (num_leaf);
	}
	return (num_leaf);
}
