#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Description: 9. Height
 * Return: the height of the tree or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* declare variable to store height */
	size_t height = 0;

	/* base case */
	if (tree == NULL)
	{
		return (0);
	}

	/* recursively traverse on the left subtree and then the right */
	else
	{
		/* store the height of the left subtree */
		size_t left_height = binary_tree_height(tree->left);
		/* store the height of the right subtree */
		size_t right_height = binary_tree_height(tree->right);

		/* compare the heights of the left and right subtrees */
		if (left_height > right_height)
		{
			height = left_height + 1;
		}
		else
		{
			height = right_height + 1;
		}
	}
	/* return the height of the tree */
	return (height);
}
