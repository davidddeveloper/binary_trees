#include "binary_trees.h"

void count_leaves(const binary_tree_t *tree, size_t *leaves);

/**
 * binary_tree_leaves - measures the leaves of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the leaves
 *
 * Return: leaves otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	count_leaves(tree, &leaves);
	return (leaves);
}

/**
 * count_leaves - traverse a list to countulate it leaves
 * using preorder
 *
 * @tree: a pointer to the root node
 * @leaves: a pointer to where to store the leaves of the tree
 *
 * Return: nothing
 */
void count_leaves(const binary_tree_t *tree, size_t *leaves)
{
	if (tree == NULL)
		return;
	if (tree != NULL)
		/* check node is a leaf */
		if (tree->left == NULL)
			if (tree->right == NULL)
				*leaves = *leaves + 1;

	/* preorder traversal of the tree */
	count_leaves(tree->left, leaves);
	count_leaves(tree->right, leaves);
}
