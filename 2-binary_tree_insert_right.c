#include "binary_trees.h"

/**
  * binary_tree_insert_right - inserts a node as the right-child
  * of another node
  * @parent: Pointer to the parent node.
  * @value: the value to store in the new node.
  *
  * Return: a pointer to the created node, or
  * NULL on failure or if parent is NULL.
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t  *newnode;

	if (!parent)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);
	if (parent->right == NULL)
	{
		parent->right = newnode;
	}
	else
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
		parent->right = newnode;
	}
	return (parent->right);
}
