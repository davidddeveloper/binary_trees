#include "binary_trees.h"

void is_perfect(const binary_tree_t *tree, int *status);

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: 1 for perfect otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int status = 0;

	if (tree == NULL)
		return (0);

	is_perfect(tree, &status);
	return (status);
}

/**
 * is_perfect - a function that checks if a binary tree is perfect
 * using preorder
 *
 * @tree: a pointer to the root node
 * @status: 1 meaning is perfect 0 is not perfect
 *
 * Return: nothing
 */
void is_perfect(const binary_tree_t *tree, int *status)
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
				*status = 1; /* perfect */
		}

		if (tree->left == NULL || tree->right == NULL)
			*status = 0; /* not perfect */

	}

	/* preorder traversal of the tree */
	is_perfect(tree->left, status);
	is_perfect(tree->right, status);
}
