#include "binary_trees.h"

void is_full(const binary_tree_t *tree, int *status);

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 for full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int status = 0;

	if (tree == NULL)
		return (0);

	is_full(tree, &status);
	return (status);
}

/**
 * is_full - a function that checks if a binary tree is full
 * using preorder
 *
 * @tree: a pointer to the root node
 * @status: 1 meaning is full 0 is not full
 *
 * Return: nothing
 */
void is_full(const binary_tree_t *tree, int *status)
{
	if (tree == NULL)
		return;
	if (tree != NULL)
	{
		if (tree->left == NULL) /* leaf level */
		{
			if (tree->right == NULL)
				return;
		}

		if (tree->left != NULL)
		{
			if (tree->right != NULL)
				*status = 1; /* full */
		}

		if (tree->left == NULL || tree->right == NULL)
			*status = 0; /* not full */

	}

	/* preorder traversal of the tree */
	is_full(tree->left, status);
	is_full(tree->right, status);
}
