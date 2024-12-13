#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance
 *
 * Description: The balance factor is the difference between the
 * heights of the left and right subtrees of a node. A tree is
 * considered balanced if the factor is between -1 and 1.
 *
 * Return: The balance factor of the tree, or 0 if the tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (tree == NULL)
		return (0);
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (tree->left != NULL)
		height_left++;
	if (tree->right != NULL)
		height_right++;

	return (height_left - height_right);
}
