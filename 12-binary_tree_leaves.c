#include "binary_trees.h"
/**
 * binary_tree_leaves - function counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count leaves
 *
 * Return: number of leaves, otherwise 0;
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lef_t, righ_t;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	lef_t = binary_tree_leaves(tree->left);
	righ_t = binary_tree_leaves(tree->right);
	return (lef_t + righ_t);
}
