#include "binary_trees.h"

/**
 * binary_tree_is_full - function checks if binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: returns 1 if full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_full_check(tree));
}
/**
 * binary_full_check - function checks if tree is full
 * @tree: pointer to the root node
 *
 * Return: 1 if full, 0 otherwise
 */
int binary_full_check(const binary_tree_t *tree)
{

	if (!tree->left && !tree->right)
		return (1);
	else if (tree->left && tree->right)
		return (binary_full_check(tree->left) && binary_full_check(tree->right));
	return (0);
}
