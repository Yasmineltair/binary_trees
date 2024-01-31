#include "binary_trees.h"

/**
  * binary_tree_depth - function that measures the depth
  * of a node in a binary tree
  * @tree: a pointer to the node to measure the depth
  * Return: node depth
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
