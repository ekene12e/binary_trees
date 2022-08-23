#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node to the left
 * @parent: the parent node
 * @value: the value to insert to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    binary_tree_t *temp;
    if (new_node == NULL)
    {
        return NULL;
    }
    new_node->n = value;
    while (parent->right)
    {
        parent = parent->right;
    }
    parent->right = new_node;
    return (new_node);
}
