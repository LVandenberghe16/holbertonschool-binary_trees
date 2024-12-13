#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: A binary tree is perfect if all internal nodes
 * have two children and all leaf nodes are at the same level.
 * If the tree is NULL, it is not considered perfect.
 *
 * Return: 1 if the tree is perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t size, i, j, sum = 0, pow;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);

	for (i = 0; i <= binary_tree_height(tree); i++)
	{
		for (j = 0, pow = 1; j < i; j++)
			pow *= 2;
		sum += pow;
	}
	if (sum == size)
		return (1);
	return (0);
}
