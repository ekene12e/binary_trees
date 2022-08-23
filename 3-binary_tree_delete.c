#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node to the left
 * @tree: the parent node
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
		{
			binary_tree_delete(tree->right);
			binary_tree_delete(tree->left);
			free(tree);
		}
}

