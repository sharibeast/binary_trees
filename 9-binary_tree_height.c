#include "binary_trees.h"

/**
 * binary_tree_height - that measures the height of a binary tree
 * @tree: pointer root
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_node_length = 0;
	size_t left_node_length = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_node_length = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_node_length = tree->right ? 1 +  binary_tree_height(tree->right) : 0;
	return ((left_node_length > right_node_length) ?
	 left_node_length : right_node_length);

	return (0);
}
