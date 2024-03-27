#include "binary_trees.h"

/**
 * binary_tree_sibling - function finds sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	int data;
	binary_tree_t *tmp = NULL;

	if (node == NULL)
		return (NULL);
	data = node->n;
	if (node->parent)
		tmp = node->parent;
	else
		return (NULL);
	if (!tmp->left || !tmp->right)
		return (NULL);
	if (tmp->left->n == data)
		return (tmp->right);
	else
		return (tmp->left);
}
