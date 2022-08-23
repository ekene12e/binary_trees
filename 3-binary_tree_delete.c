#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node to the left
 * @tree: the parent node
 */
void binary_tree_delete(binary_tree_t *tree);
{
	binary_tree_t *temp;

	temp = tree;
	while (temp->right != NULL)
		binary_tree_delete(temp->right);

	if (temp->right == NULL)
		free(temp);
}

