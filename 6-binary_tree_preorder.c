#include "binary_trees.h"

void preorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	else if (func == NULL)
		return;

	/* traverse */
	preorder(tree, func);
}

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: nothing
 */
void preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	preorder(tree->left, func);
	preorder(tree->right, func);
}
