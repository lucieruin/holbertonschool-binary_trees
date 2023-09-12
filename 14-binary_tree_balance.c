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
 * binary_tree_balance - fct that measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor or 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{

	size_t leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return (leftHeight - rightHeight);
}
