#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child
 * in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Description: A node is counted if it has at least one child
 * (left or right). If the tree is NULL, the count is 0.
 *
 * Return: The number of nodes with at least one child, or 0
 * if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
