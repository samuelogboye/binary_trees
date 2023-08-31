#include "binary_trees.h"


/**
 * binary_tree_insert_right -  inserts a node as the right-child of another node
 * @parent: pointer to the parent node to insert the right-child in
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent == NULL)
		return (NULL);

	/* Allocate memory to the new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* if parent already has right node */
	if (parent->right != NULL)
	{
		/* old right is now new_node's right */
		new_node->right = parent->right;
		/* set old right's parent to new_node */
		parent->right->parent = new_node;
	}
	parent->right = new_node; /* point parent's right to new node */

	return (new_node);
}
