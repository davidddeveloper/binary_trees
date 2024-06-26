#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *
 * @node: a pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	else if (node->parent == NULL)
		return (0);

	else if (node->left == NULL)
	{
		if (node->right == NULL)
			return (1);
	}

	return (0);
}
