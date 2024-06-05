# Binary trees

The files contained in this repository showcase ample understanging of the following:
- What binary trees are
- The difference between a binary tree and a Binary Search Tree
- The possible gain in terms of time complexity compared to linked lists
- The depth, the height, the size of a binary tree
- The different traversal methods to go through a binary tree
- What a complete, a full, a perfect, and a balanced binary tree is

The following C data structures and types were used in this project
- Basic Binary Tree
```C
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
- Binary Search Tree
```C
typedef struct binary_tree_s bst_t;
```
- AVL Tree
```C
typedef struct binary_tree_s avl_t;
```
- Max Binary Heap
```C
typedef struct binary_tree_s heap_t;
```

The function `binary_tree_print.c` can be used to print Binary trees in a pretty way
```C
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```Z
