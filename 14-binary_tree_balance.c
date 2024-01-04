#include "binary_trees.h"


/**
 * binary_tree_height -  height of a binary tree
 * @tree:  pointer to the root node of the tree
 * Return: zero if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree)
	{
		left_height = tree->left ? binary_tree_height(tree->left) : 0;
		right_height = tree->right ? binary_tree_height(tree->right) : 0;

	return ((left_height > right_height) ? left_height + 1 : right_height + 1);
	}
	return (0);
}


/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree  == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
