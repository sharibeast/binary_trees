#include "binary_trees.h"
/**
* binary_tree_sibling -  finds sibling of  node
* @node: pointer
* Return:  pointer to sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node->parent == NULL || node == NULL)
		return (NULL);

	if (node->parent->right != NULL && node->parent->left != NULL)
	{
		if (node->parent->left == node)
			return (node->parent->right);

		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
