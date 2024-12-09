
Binary Trees:

Welcome to the Binary Trees project! This repository contains various functions to manipulate and analyze binary trees. These functions are written in C and follow the Betty coding style for clarity and consistency.

Description
A binary tree is a hierarchical data structure in which each node has at most two children, referred to as the left child and the right child. This project implements multiple utilities to work with binary trees, including tree traversal, size calculations, and node relationships.

Repository Contents
file    |	Description
binary_trees.h	|	Header file containing all type definitions and function prototypes.
binary_tree_print.c	|	Helper function to visually print a binary tree.
binary_tree_node.c	|Function to create a new binary tree node.
binary_tree_insert_left.c	|	Function to insert a node as the left child of another node.
binary_tree_insert_right.c	|	Function to insert a node as the right child of another node.
binary_tree_delete.c	|	Function to delete an entire binary tree.
binary_tree_is_leaf.c	|	Function to check if a node is a leaf (has no children).
binary_tree_is_root.c	|	Function to check if a node is the root (has no parent).
binary_tree_preorder.c	|	Function to traverse a binary tree in preorder.
binary_tree_inorder.c	|	Function to traverse a binary tree in inorder.
binary_tree_postorder.c	|	Function to traverse a binary tree in postorder.
binary_tree_height.c	|	Function to calculate the height of a binary tree.
binary_tree_depth.c	|	Function to calculate the depth of a node in a binary tree.
binary_tree_size.c	|	Function to calculate the size of a binary tree.
binary_tree_leaves.c	|	Function to count the leaves in a binary tree.
binary_tree_nodes.c	|	Function to count the nodes with at least one child in a binary tree.
binary_tree_balance.c	|	Function to calculate the balance factor of a binary tree.
binary_tree_is_full.c	|	Function to check if a binary tree is full.
binary_tree_is_perfect.c	|	Function to check if a binary tree is perfect.
binary_tree_sibling.c	|	Function to find the sibling of a node.
binary_tree_uncle.c	|	Function to find the uncle of a node.

Compilation
To compile the files, use the following command:

gcc -Wall -Werror -Wextra -pedantic *.c -o binary_trees

Usage

You can include the binary_trees.h header file in your programs to use the provided functions. Here's an example of how to use these functions:

main.c
#include "binary_trees.h"

int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	binary_tree_insert_left(root, 12);
	binary_tree_insert_right(root, 402);
	binary_tree_print(root);

	return (0);
}

To execute:

bash

./binary_trees
Function Details

Creating a Binary Tree Node

File:
binary_tree_node.c
Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
Creates a new binary tree node with the given value and parent.
Inserting Nodes

Files:
binary_tree_insert_left.c, binary_tree_insert_right.c
Prototype:
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
Inserts a node as the left or right child of the given parent.
Traversals

Files:
binary_tree_preorder.c, binary_tree_inorder.c, binary_tree_postorder.c
Prototypes:
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
Implements preorder, inorder, and postorder traversals.
Properties of Nodes

Files:
binary_tree_is_leaf.c
binary_tree_is_root.c
binary_tree_sibling.c
binary_tree_uncle.c
Prototypes:
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
Check if a node is a leaf, root, sibling, or uncle.

Tree Properties

Files:
binary_tree_height.c
binary_tree_depth.c
binary_tree_size.c
binary_tree_leaves.c
binary_tree_nodes.c
binary_tree_balance.c
binary_tree_is_full.c
binary_tree_is_perfect.c
Prototypes:
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *node);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
Calculate height, depth, size, number of leaves, number of nodes, balance factor, and check fullness/perfection of the tree.

All code in this repository adheres to the Betty coding style. Use the Betty linter to verify compliance:

bash:

betty-style filename.c
betty-doc filename.c

Author

This project was developed by Vandenberghe Ludwig.