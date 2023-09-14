#include "binary_trees.h"

/**
 * binary_tree_height - fct that measures the height of a binary tree
 * @tree: pointer to the tree
 * Return: height or 0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}

/**
 * binary_tree_is_perfect - fct for check if binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 or 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (leftHeight == rightHeight)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (tree->left && tree->right
		&& binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
