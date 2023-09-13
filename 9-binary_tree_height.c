#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height
 *
 * Return: the height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	leftHeight = binary_tree_height(tree->left) + 1;
	rightHeight = binary_tree_height(tree->right) + 1;

	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}
