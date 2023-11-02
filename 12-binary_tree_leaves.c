#include "binary_trees.h"

/**
  * binary_tree_leaves - counts the leaves in a binary tree.
  * @tree: is a pointer to the root node of the
  * tree to count the number of leaves
  *
  * Return: count of leaves  or 0 if tree is NULL.
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	size += !tree->left && !tree->right ? 1 : 0;
	size += binary_tree_leaves(tree->left);
	size += binary_tree_leaves(tree->right);
	return (size);
}
