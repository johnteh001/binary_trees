#include "binary_trees.h"

/**
 * lowest_ancestor - function returns the common lowest ancestor
 * @tree: pointer to the root node
 * @first: first node
 * @second: second node
 *
 * Return: Lowest common ancestor if it exists.
 */
binary_tree_t *lowest_ancestor(binary_tree_t *tree,
		const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *lef_t, *righ_t;

	if (tree == NULL)
		return (NULL);
	else if (tree == first || tree == second)
		return (tree);
	lef_t = lowest_ancestor(tree->left, first, second);
	righ_t = lowest_ancestor(tree->right, first, second);
	if (lef_t && righ_t)
		return (tree);
	else if (lef_t)
		return (lef_t);
	else
		return (righ_t);
	return (NULL);
}
/**
 * binary_trees_ancestor - function determines the lowest ancestor
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common acestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	       const binary_tree_t *second)
{
	binary_tree_t *tree;

	if (!first || !second)
		return (0);
	tree = (binary_tree_t *)first;
	while (tree->parent)
		tree = tree->parent;
	return (lowest_ancestor(tree, first, second));
}

