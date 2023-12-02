#include "binary_trees.h"
/**
* binary_tree_uncle -  finds the uncle of a node
* @node: pointer to node finds the uncle
* Return:  pointer to uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *priv_parent;

	if (node->parent == NULL || node == NULL)
		return (NULL);

	priv_parent = node->parent;

	if (priv_parent->parent == NULL)
		return (NULL);

	if (priv_parent->parent->right != NULL && priv_parent->parent->left != NULL)
	{
		if (priv_parent->parent->left == priv_parent)
			return (priv_parent->parent->right);

		if (priv_parent == priv_parent->parent->right)
			return (priv_parent->parent->left);
	}
	return (NULL);
}
