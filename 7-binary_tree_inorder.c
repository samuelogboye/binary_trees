#include "binary_trees.h"

/**
 * binary_tree_inorder - in-order traversal function
 * @tree: pointer to the root node
 * @func: pointer to function to call for each node
 * Description: 6. in-order traversal
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* base case */
	if ((tree == NULL) || (func == NULL))
	{
		;
	}

	/**
    * recursively traverse on the left subtree,
    * the root node and then the right
    */
	else
	{
		binary_tree_inorder(tree->left, func);
        func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
