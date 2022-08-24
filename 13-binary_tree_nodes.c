#include "binary_trees.h"

/**
 * binary_tree_nodes - Measures the no of nodes of a binary tree.
 * @tree: A pointer to the node of the tree to measure the node no.
 *
 * Return: If tree is NULL, your function must return 0, else return leaf no.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
