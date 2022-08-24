#include "binary_trees.h"

/**
 * binary_tree_nodes - Measures the no of nodes of a binary tree.
 * @tree: A pointer to the node of the tree to measure the node no.
 *
 * Return: If tree is NULL, your function must return 0, else return leaf no.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_node = 0;

	if (tree == NULL)
		return (0);

	num_node += (binary_tree_nodes(tree->right)
	+ binary_tree_nodes(tree->left));

	if (tree->left || tree->right)
	{
		num_node = 1;
		return (num_node);
	}
	return (num_node);
}
