#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree
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
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree) {
    if (tree == NULL) {
        return 0; // If tree is NULL, size is 0
    }

    size_t left_size = binary_tree_size(tree->left);
    size_t right_size = binary_tree_size(tree->right);

    return (left_size + right_size + 1);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	return (size == ((size_t)(1 << height) - 1));
}
