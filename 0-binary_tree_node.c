#include "binary_trees.h"
/**
 * binary_tree_node - returns a new binary tree
 * @parent: parent node
 * @value: value to the node
 * Return: pointer new binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;
	return (node);
}

