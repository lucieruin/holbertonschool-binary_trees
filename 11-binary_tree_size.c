#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: the sum
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftSize, rightSize, sum;

	if (tree == NULL)
		return (0);

	leftSize = binary_tree_size(tree->left);
	rightSize = binary_tree_size(tree->right);
	sum = leftSize + rightSize + 1;
	return (sum);
}
