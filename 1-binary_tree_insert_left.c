#include "binary_trees.h"


/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: pointer to the parent node to insert the left-child in
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/* Allocate memory to the new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Set value for each set */
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/* if parent already has left node */
	if (parent->left != NULL)
	{
		/* old left is now new_node's left */
		new_node->left = parent->left;
		/* set old left's parent to new_node */
		parent->left->parent = new_node;
	}
	parent->left = new_node; /* point parent's left to new node */

	return (new_node);
}
