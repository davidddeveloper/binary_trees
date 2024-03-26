#include "binary_trees.h"

void inorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	else if (func == NULL)
		return;

	/* traverse */
	inorder(tree, func);
}

/**
 * inorder - goes through a binary tree using in-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */
void inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	inorder(tree->left, func);
	func(tree->n);
	inorder(tree->right, func);
}
