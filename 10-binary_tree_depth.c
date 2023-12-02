#include "binary_trees.h"
/**
* binary_tree_depth - measures the node depth
* @tree: pointer to node
* Return:  size_t
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	binary_tree_t *current_node;
	unsigned int depth_of_tree;

	if (tree == NULL)
		return (0);

	depth_of_tree = 0;

	current_node = tree->parent;
	while (current_node)
	{
		depth_of_tree++;
		current_node = current_node->parent;
	}
	return (depth_of_tree);
}
