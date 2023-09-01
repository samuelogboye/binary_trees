#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node
 * Description: 11. Size
 * Return: see below
 * 1. upon success, return size of tree
 * 2. upon fail, return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* declare variable to store size */
	size_t size = 0;

	/* base case */
	if (tree == NULL)
	{
		return (0);
	}

	/* recursively traverse on the left subtree and then the right */
	else
	{
		size = 1 + binary_tree_size(tree->left) +
			binary_tree_size(tree->right);
	}
	/* return the size of the tree */
	return (size);
}
