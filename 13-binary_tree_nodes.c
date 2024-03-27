#include "binary_trees.h"
/**
 * binary_tree_nodes - function counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes, otherwise 0;
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lef_t, righ_t;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	lef_t = binary_tree_nodes(tree->left);
	righ_t = binary_tree_nodes(tree->right);
	return (lef_t + 1 + righ_t);
}
