
# 📚 Data Structures & Algorithms in C/C++

A comprehensive collection of classic data structures and algorithms implemented in C++, based on the Udemy course by Abdul Bari. This repository demonstrates fundamental concepts such as arrays, linked lists, stacks, trees, and more, with a focus on building each structure from scratch for educational purposes.

---

## 📑 Table of Contents
1. [Course Overview](#course-overview)
2. [Repository Structure](#repository-structure)
3. [Technologies Used](#technologies-used)
4. [Features](#features)
5. [How to Run](#how-to-run)
6. [Final Project - Rat Maze](#final-project---rat-maze)
7. [Future Enhancements](#future-enhancements)
8. [Credits](#credits)

---

## 🎯 Course Overview

- **Platform:** Udemy  
- **Course:** [Mastering Data Structures & Algorithms using C and C++](https://www.udemy.com/course/datastructurescncpp/)  
- **Instructor:** Abdul Bari  

### 🧠 Topics Covered

- Arrays and Matrices
- Linked Lists (Singly, Doubly, Circular)
- Stacks and Queues
- Trees (Binary, BST, AVL)
- Graphs and Traversals
- Hashing and Hash Tables
- Recursion and Polynomial Operations
- Sorting Algorithms

---

## 🗂 Repository Structure

### `01_array/`
- Implements the Array ADT with insert, delete, and search operations.

### `02_ADT_using_CPP/`
- Object-oriented array implementations using classes.

### `03_matrix/`
- Includes Diagonal, Lower Triangular, and Symmetric Matrix classes with memory optimization techniques.

### `04_polynomial/`
- Polynomial class supporting addition using operator overloading.

### `05_sparse_matrix/`
- Sparse matrix representation using triplet method with addition and transpose.

### `06_linked_list/`
- Singly and doubly linked list implementations with insertion, deletion, and reversal.

### `07_stack/`
- Stack using array and linked list, includes applications like parenthesis matching.

### `08_queue/`
- Queue types including circular, dequeue, and linked list-based queues.

### `09_tree/`
- Tree structures with recursive/iterative traversals, BST, AVL trees, and level-order traversal.

### `10_graph/`
- Adjacency matrix/list representations and BFS/DFS algorithms.

### `11_hashing/`
- Linear probing and chaining techniques for handling collisions.

### `12_sorting/`
- Classic sorting algorithms: Bubble, Insertion, Merge, and Quick Sort.

### `13_recursion/`
- Demonstrates recursive solutions to common problems like factorial, Fibonacci, and Tower of Hanoi.

### `Rat_Maze/`
- Final course project demonstrating backtracking and visualization using SDL.

---

## ⚙️ Technologies Used

| Language | Tools       | IDEs           |
|----------|-------------|----------------|
| C++      | SDL3 (in final project) | VS Code, Code::Blocks |
| Algorithms | Manual Implementation | - |

---

## 🔐 Features

- 📌 Clean, modular C++ code
- 🧠 Strengthens understanding of data structure internals
- 🧪 Console-based testing and visualization
- 💡 Recursive and iterative methods side by side
- 🔁 Covers theoretical and practical applications

---

## 🚀 How to Run

```bash
# Clone the repository
git clone https://github.com/mohamedhanyhemdan/DATASTRUCTURE.git
cd DATASTRUCTURE

# Navigate to a folder
cd 01_array

# Compile and run
g++ ArrayADT.cpp -o array
./array
```

For the final project:
```bash
cd Rat_Maze
g++ Rat_Maze.cpp -o Rat_Maze -lSDL3
./Rat_Maze
```

---

## 🧩 Final Project — Rat Maze Solver

### 📌 Overview
An SDL-based C++ application that solves the *Rat in a Maze* problem using backtracking and visually displays the solution path.

### 🧠 Concepts Applied
- Recursion & Backtracking
- Matrix Navigation
- Graphical Rendering using SDL3

### 🖼 Visualization
- ✅ Red cells: path taken
- ✅ Green cells: Blocks
- ✅ White cells: background

### 🔍 Why This Project?
This project combines core concepts from across the course — arrays, recursion, 2D navigation — and wraps them in a graphical interface, making it an ideal capstone project.

---

## 🔮 Future Enhancements

- Add unit tests with Google Test framework
- Include time/space complexity in file headers
- Interactive visualizations using ImGui or SFML
- Extend into advanced topics like Trie, Segment Tree, and DP
- Add maze randomization and user input in Rat Maze

---

## 👤 Credits

- **Course Author:** Abdul Bari  
- **Repo Maintainer:** [Mohamed Hany](https://github.com/mohamedhanyhemdan)

Special thanks to the community for feedback and support!

---
