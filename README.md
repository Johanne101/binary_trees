# Binary Trees

```
                  .----------------------(006)-------.
             .--(001)-------.                   .--(008)--.
       .--(-02)       .--(003)-------.       (007)     (009)
     (-06)          (002)       .--(005)
                              (004)
```
[Original Code here](https://stackoverflow.com/questions/801740/c-how-to-draw-a-binary-tree-to-the-console/13755911#13755911)

## What is a [binary tree](https://en.wikipedia.org/wiki/Binary_tree)

```
a binary tree is a tree looking data structure, where each node has at most
two children, which are referred to as the left child and the right child.

the binary tree is a finite set of elements that is either
empty or further divided into sub-trees.

The are Non-Linear Data Structures and mainly used to represent
data containing the hierarchical relationship between elements, E.g:
  * records,
  * family trees, and
  * table of contents.
```
<p>
>1. One of the ***most important nonlinear data structure*** is the tree.
>>2. One of the ***most important applications*** of the Binary tree is ***in the searching algorithm.***

There are two ways to represent binary trees. These are:

* Using arrays
* Using Linked lists

-------------
Applications of binary trees:

A general tree is defined as a nonempty finite set T of elements called nodes such that:

* The tree contains the root element
* The remaining elements of the tree form an ordered collection of zeros and more disjoint trees
  * T1, T2, T3, T4 …. >Tn which are called subtrees.

### Types of Binary Trees

|**TYPE**| **Description**| |
|:-------|----------------|-|
|**full binary tree**| Also called as *proper binary tree* or *2-tree*: is a tree in which all the node other than the leaves has exact two children.|![alt text](https://www.w3schools.in/wp-content/uploads/2016/09/Full-Binary-Tree.png?ezimgfmt=rs:466x350/rscb6/ng:webp/ngcb6)|
|**complete binary tree**|is a binary tree in which at every level, except possibly the last, has to be filled and all nodes are as far left as possible.|![alt text](https://www.w3schools.in/wp-content/uploads/2016/09/Complete-Binary-Tree.png?ezimgfmt=rs:526x366/rscb6/ng:webp/ngcb6)|
|**extended binary tree** (also called *2-tree*)|A binary tree can be converted into this type by adding new nodes to its leaf nodes and to the nodes that have only one child. These new nodes are added in such a way that all the nodes in the resultant tree have either zero or two children.|
|**The threaded Binary tree**| This tree is represented using pointers the empty subtrees are set to `NULL`, <p> i.e. 'left' pointer of the node whose left child is empty subtree is normally set to `NULL`. (*These large numbers of pointer sets are used in different ways.*)</p>|


</p>
## What is the difference between a binary tree and a Binary Search Tree
|Binary Trees| Binary Search Tree|
|------------|-------------------|
|Trees are Hierarchical type of data structures.| Binary search tree or BST in short|
|As the data in a binary tree is organized, it allows operations like: | whose nodes each store keys:|
|*insertion*, *deletion*, *update* and *fetch*.| *greater than their left child nodes* and *less than all the right child nodes*.|


## What is the possible gain in terms of time complexity compared to linked lists


## What are the depth, the height, the size of a binary tree
## What are the different traversal methods to go through a binary tree

|Traversal|how method works| syntax|
|:-----|------------|:-----:|
|**pre-order**|goes through a binary tree using pre-order traversal||
|**in-order**|goes through a binary tree using in-order traversal||
|**post-order**| goes through a binary tree using post-order traversal||

## What is a complete, a full, a perfect, a balanced binary tree

Data Structures:
================

***Basic Binary Tree***

```
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
```

***Binary Search Tree***

```
typedef struct binary_tree_s bst_t;
```

***AVL Tree***

```
typedef struct binary_tree_s avl_t;
```

***Max Binary Heap***

```
typedef struct binary_tree_s heap_t;
```

---------------
*Overview:*

### A Binary Tree:
  * Are Hierarchical type of data structure (looks like a tree..)
  * Is a special type of tree in which every node or vertex has either;
    * no child node (0)
	* one child node (1), or
	* two child nodes (2)
  * Each node has at most two children;
    * the left child and
	* the right child
  * It's a non-linear data structure (the most important)
  * It's either an empty tree, or
  * A Binary Tree
    * consists of a node called the root node,
	* a left subtree, and
	* a right subtree (both of which will act as a binary tree once again)
  * The're various forms
  * They play a vital role in a software application



Resources
=========
***Read or watch:***

* [Binary tree](https://en.wikipedia.org/wiki/Binary_tree) (note the first line: `Not to be confused with B-tree.`)
  * [algorithm for binary tree](Algorithm for Binary Tree:): (how to create a new tree)
  * [tree data structure](https://en.wikipedia.org/wiki/Tree_(data_structure))
  * [tutorial binary tree](https://www.w3schools.in/data-structures-tutorial/binary-trees/)
* [Data Structure and Algorithms](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm) - Tree
* [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
* [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
* [Data structures](https://www.youtube.com/watch?v=H5JubkIy_p8): Binary Tree

**AUTHORS:**

[Christian Rojas](https://github.com/ChristianRojasOliver)

[Johanne Lopez](https://github.com/Johanne101)
