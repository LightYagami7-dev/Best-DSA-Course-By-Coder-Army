# REVIEW_REQUIRED

This document details all items, structural anomalies, and scope demarcations identified during the restructuring of the Coder Army DSA course repository.

---

## 1. Empty / Stub Files Omitted (Rule 10: "No empty useless files exist")

The following 3 files from the original source repository were empty or contained only an unpopulated `int main() {}` skeleton without any problems, code, or homework questions. To maintain clean repository quality, they were excluded from the final problem set:

1. **`5. RECURSION (19 Lectures)/Recursion - 4/Homework/homework.cpp`**
   - Size: 55 bytes
   - Content: `#include <iostream>\nusing namespace std;\n\nint main() {}`
2. **`1. ARRAYS (15 Lectures)/L13 - Important Array Questions/Homework/homework.cpp`**
   - Size: 55 bytes
   - Content: `#include <iostream>\nusing namespace std;\n\nint main() {}`
3. **`6. OOPS Complete (8 Lectures)/1 Object Oriented Programming in C++/object.cpp`**
   - Size: 0 bytes
   - Content: Completely empty file.

---

## 2. Non-Code Assets Faithfully Preserved

The following supplementary files were present in the source repository and have been preserved in their respective lecture directories:

1. **`Homework.pdf`**:
   - Original path: `DSA - Coder Army/1. ARRAYS (15 Lectures)/L3 - Time ans Space Complexity/Homework/Homework.pdf`
   - Destination path: `01-Arrays/Lecture-03/Homework.pdf`
2. **`No Code Only Notes`**:
   - Original path: `DSA - Coder Army/15. Graph Complete (24 Lectures)/1 Introduction of Graph DS/No Code Only Notes`
   - Destination path: `16-Graph/Lecture-01/No Code Only Notes`

---

## 3. Course Scope & Playlist Mapping

- **Total Playlist Videos**: 163 videos.
- **Videos 1 – 156**: Fully represented across topics `00-Basics-CPP` through `16-Graph`.
- **Videos 157 – 163**:
  - *Lecture 157*: Backtracking (N-Queens, M-Coloring, Sudoku Solver)
  - *Lecture 158*: Greedy Algorithm From Basic To Advance
  - *Lecture 159*: Hashing in Data Structure | Zero To Advance Level
  - *Lectures 160–163*: Dynamic Programming (Intro, Climbing Stairs, Count Hops, House Robber)
  - **Status**: The source repository (`vivekmangal204/Best-DSA-Course-By-Coder-Army`) did not contain any code or directories for these lectures. Per strict instructions (*"Do NOT copy code from YouTube; Do NOT invent missing code"*), no artificial code was synthesized for these topics.
- **Introductory Theory Lectures Without Code**:
  - Lecture 01: Introduction to Programming
  - Lecture 02: Flowcharts and Pseudocode
  - Lecture 18 / Array L3: Time and Space Complexity (Contains `Homework.pdf`)
  - Lecture 58: Time and Space Complexity in Recursion
  - Lecture 89: Coding Battles (Arrays vs Linked Lists discussion)
  - Lecture 133 / Graph L1: Graph Data Structure Overview (Contains `No Code Only Notes`)

---

## 4. Same-Problem Multiple Approaches Preserved

As required by user guidelines (*"DIFFERENT PROBLEM -> DIFFERENT CPP FILE; SAME PROBLEM + DIFFERENT APPROACH -> SAME CPP FILE"*), multiple approaches to the same problem (such as Method 1, Method 2, Brute Force, Better, Optimal) have been kept together within a single `.cpp` file. 

In some instances in the original repository, the author wrote multiple approaches using the identical function name (e.g., `check` in Stack Lecture 02, `reverseList` in Linked List Lecture 03, `canRepresentBST` in BST Lecture 03). Per instruction (*"The goal is ORGANIZATION, not REFACTORING; DO NOT change variable names or rewrite the author's implementation"*), these implementations have been preserved exactly as written.
