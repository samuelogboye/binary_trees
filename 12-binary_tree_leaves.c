#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node
 * Description: 12. Leaves
 * Return: see below
 * 1. upon success, returns number of leaves
 * 2. upon fail, returns 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* declare variable to store leaves */
	size_t leaves = 0;

	/* base case */
	if (tree == NULL)
	{
		return (0);
	}

	/* recursively traverse on the left subtree and then the right */
	else
	{
		leaves = tree->left == NULL && tree->right == NULL ?
			1 : binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);
	}
	/* return the number of leaves */
	return (leaves);
}
