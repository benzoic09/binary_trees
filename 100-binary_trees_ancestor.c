#include "binary_trees.h"


/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *left;
	binary_tree_t *right;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second || first == second->parent)
		return ((binary_tree_t *)first);

	if (second == first->parent)
		return ((binary_tree_t *)second);

	 left = binary_trees_ancestor(first->left, second);
	 right = binary_trees_ancestor(first->right, second);

	if (left != NULL && right != NULL)
		return ((binary_tree_t *)first);

	return ((left != NULL) ? left : right);
	}
