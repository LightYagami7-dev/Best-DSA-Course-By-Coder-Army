# Best DSA Course By Coder Army

This repository contains the structured, lecture-wise solutions and code for the complete **DSA Course by Coder Army** (taught by Rohit Negi), mapped directly to the official course playlist.

- **Official YouTube Playlist**: [DSA Playlist in C++](https://youtube.com/playlist?list=PLQEaRBV9gAFu4ovJ41PywklqI7IyXwr01)
- **Source Code Base**: [vivekmangal204/Best-DSA-Course-By-Coder-Army](https://github.com/vivekmangal204/Best-DSA-Course-By-Coder-Army.git)

---

## 📌 Repository Organization & Standards

1. **Clean Hierarchy**: Structured as `Topic -> Lecture -> Problem`.
2. **One Problem = One `.cpp` File**: Every distinct problem has its own independent `.cpp` file with all necessary `#include` headers and declarations.
3. **Multiple Approaches Kept Together**: Where a problem includes multiple methods (e.g. Brute Force, Better, Optimal), all approaches are preserved inside the same file.
4. **Homework Solutions**: In-class and homework problems are clearly demarcated (homework files have a `_HW` prefix in their title).
5. **Faithful Code Preservation**: All original logic, DSA algorithms, variable names, and comments have been strictly preserved.

---

## 📚 Course Structure & Roadmap

| # | Topic | Lectures | Total Problem Files | Description |
|---|-------|----------|---------------------|-------------|
| 00 | [`00-Basics-CPP`](./00-Basics-CPP) | Lectures 03 – 15 | 75 | Introduction to C++, loops, patterns, operators, number conversions, functions |
| 01 | [`01-Arrays`](./01-Arrays) | Lectures 01 – 15 | 71 | Basic operations, selection/bubble/insertion sort, binary search, two pointers, prefix sums |
| 02 | [`02-2D-Arrays`](./02-2D-Arrays) | Lectures 01 – 05 | 28 | 2D matrix manipulation, wave form, spiral matrix, 2D binary search, majority element |
| 03 | [`03-Strings`](./03-Strings) | Lectures 01 – 09 | 23 | String manipulation, palindrome, Roman numerals, sliding window, KMP algorithm |
| 04 | [`04-Pointers`](./04-Pointers) | Lectures 01 – 06 | 24 | Pointer arithmetic, double pointers, dynamic memory allocation in 1D/2D/3D |
| 05 | [`05-Recursion`](./05-Recursion) | Lectures 01 – 19 | 55 | Basic recursion, array/string recursion, merge sort, quick sort, subsets, permutations, backtracking |
| 06 | [`06-OOPs`](./06-OOPs) | Lectures 01 – 08 | 25 | Classes, constructors, destructors, encapsulation, inheritance types, polymorphism, exceptions, file handling |
| 07 | [`07-LinkedList`](./07-LinkedList) | Lectures 01 – 11 | 42 | Singly, doubly, and circular linked lists, loop detection, reverse in groups, merge K sorted, cloning |
| 08 | [`08-Stack`](./08-Stack) | Lectures 01 – 07 | 28 | Stack implementation, parentheses matching, next greater element, histogram, celebrity problem, N-stack |
| 09 | [`09-Queue`](./09-Queue) | Lectures 01 – 05 | 13 | Queue implementation, circular queue, deque, sliding window maximum |
| 10 | [`10-BinaryTree`](./10-BinaryTree) | Lectures 01 – 10 | 31 | Binary tree traversals (pre/in/post/iterative/Morris), views (top/left/right/bottom), boundary, burning tree |
| 11 | [`11-BST`](./11-BST) | Lectures 01 – 06 | 20 | Binary search tree operations, LCA, conversion to DLL, merging BSTs, largest BST |
| 12 | [`12-AVLTree`](./12-AVLTree) | Lectures 01 – 02 | 2 | Self-balancing binary search trees (AVL rotations, insertion, deletion) |
| 13 | [`13-STL`](./13-STL) | Lecture 01 | 4 | Complete C++ Standard Template Library (STL) one-shot reference |
| 14 | [`14-Heap`](./14-Heap) | Lectures 01 – 08 | 25 | Max/Min heap, build heap, heap sort, priority queue, Kth largest/smallest, median in a stream |
| 15 | [`15-SlidingWindow`](./15-SlidingWindow) | Lectures 01 – 04 | 10 | Fixed and variable sliding window techniques, subarray sums, smallest window |
| 16 | [`16-Graph`](./16-Graph) | Lectures 01 – 24 | 36 | Graph representations, BFS/DFS, cycle detection, topological sort, Dijkstra, Bellman-Ford, Floyd-Warshall, MST (Prim/Kruskal), Bridges, Articulation Points, SCC (Kosaraju/Tarjan) |

> **Note on Lectures 157 – 163**: In the YouTube playlist, lectures 157 to 163 cover Backtracking (N-Queens, M-Coloring, Sudoku Solver), Greedy Algorithms, Hashing, and Dynamic Programming. These sections were not included in the original source code repository and have therefore not been fabricated, preserving repository authenticity.

---

## 🛠 Compilation & Usage

All `.cpp` files are standalone and can be compiled directly using any modern C++ compiler (C++11 or higher):

```bash
g++ -std=c++17 01_ProblemName.cpp -o solution
./solution
```
