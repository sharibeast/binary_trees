#include "binary_trees.h"
/**
* binary_tree_nodes -  counts the nodes with at least 1 child
* @tree: pointer
* Return: number of node with 1 > child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right != NULL || tree->left != NULL)
	{
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	}
	else
	{
		return (0);
	}
}
