#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - function finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	uncle = binary_tree_sibling(node->parent);
	if (uncle != NULL)
		return (uncle);
	else
		return (NULL);
}

