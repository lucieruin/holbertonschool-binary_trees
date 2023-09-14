#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node;
 *
 * Return: the lowest common ancestor
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)

{
	binary_tree_t *pilgrim;

	if (first == NULL || second == NULL)
		return (NULL);

	pilgrim = (binary_tree_t *)second;

	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = pilgrim;
		first = first->parent;
	}
	return (NULL);
}
