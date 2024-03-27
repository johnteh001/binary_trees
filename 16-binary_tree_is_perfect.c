#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * is_perfect - function checks if tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect otherwise 0
 */
int is_perfect(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (1);
	if ((tree->left && tree->right) || (!tree->left && !tree->right))
	{
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
/**
 * binary_tree_is_perfect - function checks if the binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_balance(tree) == 0 && is_perfect(tree))
		return (1);
	return (0);
}
