#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child_node = malloc(sizeof(binary_tree_t));

	if (new_left_child_node == NULL || parent == NULL)
		return (NULL);

	new_left_child_node->parent = parent;
        new_left_child_node->n = value;
	new_left_child_node->left = NULL;
	new_left_child_node->right = NULL;
	if (parent->left != NULL)
	{
		new_left_child_node->left = parent->left;
		parent->left->parent = new_left_child_node;
	}
	parent->left = new_left_child_node;

	return (new_left_child_node);
}
