#include "binary_trees.h"

size_t binary_tree_height2(const binary_tree_t *tree);

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *
 *@tree: pointer to the root node of the tree to check
 *
 *Return: if a binary tree is perfect 1 else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t conf = 0, conf2 = 2, i = 0;

if (tree == NULL)
return (0);
}
