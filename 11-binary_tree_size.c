#include "binary_trees.h"

void calc_size(const binary_tree_t *tree, size_t *size);

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: size otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	calc_size(tree, &size);
	return (size);
}

/**
 * calc_size - traverse a list to calculate it size
 * using preorder
 *
 * @tree: a pointer to the root node
 * @size: a pointer to where to store the size of the tree
 *
 * Return: nothing
 */
void calc_size(const binary_tree_t *tree, size_t *size)
{
	if (tree == NULL)
		return;

	/* preorder traversal of the tree */
	(*size) = (*size) + 1;
	calc_size(tree->left, size);
	calc_size(tree->right, size);
}
