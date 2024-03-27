#include "binary_trees.h"

/**
 * binary_tree_balance - function measures the balance factor of a tree
 * @tree: pointer to the root of the node of tree to measure balance
 *
 * Return: balance factor, or 0 on failure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lef_t = 0;
	int righ_t = 0;

	if (tree == NULL)
		return (0);
	lef_t += height(tree->left);
	righ_t += height(tree->right);
	return (lef_t  - righ_t);
}
/**
 * height - function promptly calculates the height of the tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree;
 */
int height(const binary_tree_t *tree)
{
	int lef_t, righ_t;

	if (tree == NULL)
		return (-1);
	lef_t = height(tree->left);
	righ_t = height(tree->right);
	if (lef_t > righ_t)
		return (lef_t + 1);
	else
		return (righ_t + 1);
}
