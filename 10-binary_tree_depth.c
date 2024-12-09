#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @node: Pointer to the node to measure the depth
 *
 * Description: The depth of a node is the number of edges from
 * the node to the root node. If the node is the root, its depth
 * is 0. If the node is NULL, the function returns 0.
 *
 * Return: The depth of the node, or 0 if the node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (!node || !node->parent)
		return (0);

	return (1 + binary_tree_depth(node->parent));
}
