#include "binary_trees.h"

/**
  * binary_tree_node - creates a binary tree node.
  * @parent: Pointer to the parent node of the node to create.
  * @value: the value to put in the new node.
  *
  * Return: pointer to created node or NULL on fail.
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);

	newnode = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
