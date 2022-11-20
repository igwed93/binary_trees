# 0x1D. C - Binary trees

**What is a binary tree?**
A binary tree is a data structure in which a record is linked to two successor records. A binary tree follows certain rules of implementations.
- The data in the left successor record must be less than the data in the the root node or record.
- The data in the right successor record must be less than the data in the root node or record.

**Import Concepts in Binary Trees:**

- Path: Path refers to the sequence of nodes along the edges of a tree.

- Root:  The node at the top of the tree is called root. There is only one root per tree and one path from the root node to any node.

- Parent:  Any node except the root node has one edge upward to a node called parent.

- Child: The node below a given node connected by its edge downward is called its child node.

- Leaf:  The node which does not have any child node is called the leaf node.

- Subtree:  Subtree represents the descendants of a node.

- Visiting:  Visiting refers to checking the value of a node when control is on the node.

- Traversing: Traversing means passing through nodes in a specific order.

- Levels: The level of a node represents the generation of a node. If the root node is at level 0, then its next child node is at level 1, its grandchild is at level 2, and so on. **NB: The level of a node is mostly refered to as its depth.**

- keys: Key represents a value of a node which can be used to carryout a search for a node.