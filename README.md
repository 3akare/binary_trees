# Binary Trees

A binary tree is a tree-type non-linear data structure with a maximum of two children for each parent. Every node in a binary tree has a left and right reference along with the data element. The node at the top of the hierarchy of a tree is called the root node. The nodes that hold other sub-nodes are the parent nodes.

# Tree Structure
### Basic Binary Tree Structure
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

### Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
### AVL Tree
```
typedef struct binary_tree_s avl_t;
```
### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
# Tree Operations
|Operation|Function|File location|
|----------|--------|---------|
|Create Binary Tree Node |`binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)`|[here](./0-binary_tree_node.c)|
| Inserts a node as the left-child of another node|`binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`|[here](./1-binary_tree_insert_left.c.c)|
| Inserts a node as the right-child of another node|`binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`|[here](./2-binary_tree_insert_right.c)|
|Delete tree|`void binary_tree_delete(binary_tree_t *tree);`|[here](./3-binary_tree_delete.c)|
|Is Node == `leaf`| `int binary_tree_is_leaf(const binary_tree_t *node)`| [here](./4-binary_tree_is_leaf.c)|
|Is Node == `root`| `int binary_tree_is_root(const binary_tree_t *node)`| [here](./5-binary_tree_is_root.c)|
|Pre-order traversal|`void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))`|[here](./6-binary_tree_preorder.c)|
|Inorder traversal|`void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))`|[here](./7-binary_tree_inorder.c)|
|Post-order traversal|`void binary_tree_postorder(const binary_tree_t *tree, void(*func)(int))`|[here](./8-binary_tree_postorder.c)|
|Tree Height|`size_t binary_tree_height(const binary_tree_t *tree);`|[here](./9-binary_tree_height.c)|
|Tree depth|`size_t binary_tree_depth(const binary_tree_t *tree);`|[here](./10-binary_tree_depth.c)|
|Tree size|`size_t binary_tree_size(const binary_tree_t *tree);`|[here](./11-binary_tree_size.c)|
|Tree Leaves|`size_t binary_tree_leaves(const binary_tree_t *tree);`|[here](./12-binary_tree_leaves.c)|
|Full Tree|`int binary_tree_is_full(const binary_tree_t *tree);`|[here](./15-binary_tree_is_full.c)|
|Get Sibling|`binary_tree_t *binary_tree_sibling(const binary_tree_t *node);`|[here](./17-binary_tree_sibling.c)|
|Get Uncle|`binary_tree_t *binary_tree_uncle(const binary_tree_t *node)`|[here](./18-binary_tree_uncle.c)|
|Print tree| `static size_t _height(const binary_tree_t *tree)`  `static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)`  `void binary_tree_print(const binary_tree_t *tree)`|[here](./binary_tree_print.c)|

## Tree Print Display

Sample:
```
                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```
# Authors
- [David Bakare](https://github.com/3akare)
- [Omorisiagbon Abraham Osazee](https://github.com/Abrahamosaz)

# Acknowledgements
This project was written as part of the curriculum for Holberton.

## Others
- Definition of Binary tree. [upgrad.com](https://www.upgrad.com/blog/5-types-of-binary-tree/#:~:text=A%20binary%20tree%20is%20a,nodes%20are%20the%20parent%20nodes.)
- Printing Out Trees. [Print trees Original Code](https://stackoverflow.com/a/13755911/5184480)
