#include "binary_trees.h"


/**
 * binary_tree_nodes -  counts nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: o when pointer is null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_node(tree->left);
	right_nodes = binary_tree_node(tree->right);

	return (left_nodes + right_nodes + 1);
}
