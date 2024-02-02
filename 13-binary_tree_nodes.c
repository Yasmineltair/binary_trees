#include "binary_trees.h"

/**
  * binary_tree_is_leaf - function that checks if a node is a leaf
  * @node: a pointer to the node to check
  * Return: 1 if node is a leaf, otherwise 0
  */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
/**
  * binary_tree_nodes -  function that counts the nodes with
  * at least 1 child in a binary tree
  * @tree:  pointer to the root node of the tree to
  * count the number of nodes
  * Return: no of nodes with at least 1 child in a binary tree
  */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	right = binary_tree_nodes(tree->right);
	left = binary_tree_nodes(tree->left);
	return (right + left + 1);
}
