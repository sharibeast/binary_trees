#include "binary_trees.h"
/**
* binary_tree_postorder - goes through a binary tree  post-order traversal
* @tree: pointer
* @func: pointer
* Return:  void
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func  && tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
