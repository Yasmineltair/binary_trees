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
  * binary_tree_is_full - function that checks
  * if a binary tree is full
  * @tree: pointer to the root node of the tree to check
  * Return: 0 if NULL
  */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
