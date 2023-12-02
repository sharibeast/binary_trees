#include "binary_trees.h"
/**
* binary_tree_height - measures height of a B-tree
* @tree: pointer  root
* Return:  size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (maxDepth(tree) - 1);
}

/**
* maxDepth - measures height of B-tree
* @node: pointer
* Return: Int
*/
int maxDepth(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{

		int rightDepth = maxDepth(node->right);
		int leftDepth = maxDepth(node->left);


		if (rightDepth < leftDepth)
		{
			return (leftDepth + 1);
		}
		else
		{
			return (rightDepth + 1);
		}
	}
}
