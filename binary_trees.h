#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Basic binary tree*/

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/*binary search tree*/
typedef struct binary_tree_s bst_t;

/*AVL tree*/
typedef struct binary_tree_s avl_t;

/*Max binary heap*/
typedef struct binary_tree_s heap_t;

/*print binary_tree*/
void binary_tree_print(const binary_tree_t *);

/*create a binary tree node function*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*insert a node as the left-child of another node*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/*insert a node as the right-child of another node*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
#endif
