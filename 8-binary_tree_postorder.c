#include "binary_trees.h"

void postorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_postorder - goes through a binary tree using post-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	else if (func == NULL)
		return;

	/* traverse */
	postorder(tree, func);
}

/**
 * postorder - goes through a binary tree using post-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */
void postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	postorder(tree->left, func);
	postorder(tree->right, func);
	func(tree->n);
}
