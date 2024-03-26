#include "binary_trees.h"

void count_nodes_ex_leaves(const binary_tree_t *tree, size_t *nodes);

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 *
 * @tree: a pointer to the root node of the tree
 *
 * Return: nodes otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	count_nodes_ex_leaves(tree, &nodes);
	return (nodes);
}

/**
 * count_nodes_ex_leaves - traverse a list to countulate it nodes
 * using preorder
 *
 * @tree: a pointer to the root node
 * @nodes: a pointer to where to store the nodes of the tree
 *
 * Return: nothing
 */
void count_nodes_ex_leaves(const binary_tree_t *tree, size_t *nodes)
{
	if (tree == NULL)
		return;
	if (tree != NULL)
	{
		/* check nodes with at least 1 child */
		if (tree->left != NULL)
			*nodes = *nodes + 1;

		else if (tree->right != NULL)
			*nodes = *nodes + 1;
	}

	/* preorder traversal of the tree */
	count_nodes_ex_leaves(tree->left, nodes);
	count_nodes_ex_leaves(tree->right, nodes);
}
