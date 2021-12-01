# Binary Trees

```
                  .----------------------(006)-------.
             .--(001)-------.                   .--(008)--.
       .--(-02)       .--(003)-------.       (007)     (009)
     (-06)          (002)       .--(005)
                              (004)
```
[Original Code here](https://stackoverflow.com/questions/801740/c-how-to-draw-a-binary-tree-to-the-console/13755911#13755911)

## What is a binary tree
## What is the difference between a binary tree and a Binary Search Tree
## What is the possible gain in terms of time complexity compared to linked lists
## What are the depth, the height, the size of a binary tree
## What are the different traversal methods to go through a binary tree
## What is a complete, a full, a perfect, a balanced binary tree

Data Structures:
=================
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


Resources
=========
***Read or watch:***

* [Binary tree](https://en.wikipedia.org/wiki/Binary_tree) (note the first line: `Not to be confused with B-tree.`)
* [Data Structure and Algorithms](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm) - Tree
* [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
* [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
* [Data structures](https://www.youtube.com/watch?v=H5JubkIy_p8): Binary Tree

**AUTHORS:**

[Christian Rojas](https://github.com/ChristianRojasOliver)

[Johanne Lopez](https://github.com/Johanne101)
