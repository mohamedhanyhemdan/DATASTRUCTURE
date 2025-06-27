
# 🐭 Rat Maze Solver — C++ with SDL3 Visualization

A visual pathfinding application solving the classic *Rat in a Maze* problem using backtracking in C++. Built using SDL3, the project showcases how recursion and GUI can be combined to solve and visualize algorithmic problems.

---

## 📑 Table of Contents
1. [Project Overview](#project-overview)
2. [Algorithm Logic](#algorithm-logic)
3. [Maze Representation](#maze-representation)
4. [Graphical Output](#graphical-output)
5. [Technologies & Tools Used](#technologies--tools-used)
6. [How to Run](#how-to-run)
7. [Features](#features)
8. [Future Enhancements](#future-enhancements)
9. [Author](#author)

---

## 🧠 Project Overview

This project implements the Rat in a Maze algorithm to find a path from the top-left cell `(0,0)` to the bottom-right `(n-1,n-1)` in a 2D grid. The maze is displayed in a window, showing the successful path in red and obstacles/walkable paths in green.

- Developed as a part of **Data Structures and Algorithms Course by Abdul Bari**
- Implemented in **C++** using **SDL3** for visualization

---

## 🔄 Algorithm Logic

- **Approach:** Recursive Backtracking
- **Directions:** Up, Down, Left, Right
- **Base Condition:** Reach the destination cell `(n-1,n-1)`
- **Backtrack:** If a dead end is found, undo the current step

```cpp
if (j < n - 1 && maze[i][j + 1] == 1)
    Rat_maze(i, j + 1);
```

---

## 🔲 Maze Representation

The maze is a 2D matrix:
- `1` → walkable path  
- `0` → wall/block

```cpp
int maze[n][n] = {
    {1, 0, 0, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 1, 0},
    {0, 1, 1, 1, 0, 1, 0},
    {0, 0, 0, 1, 0, 1, 1},
    {0, 1, 1, 1, 0, 0, 1},
    {0, 0, 0, 1, 1, 1, 1}
};
```

---

## 🖼 Graphical Output

### Color Legend:
- 🟥 **Red** – Path taken by the rat
- 🟩 **Green** – Block (not taken)
- ⬜ **White** – Unvisited

Output includes both terminal path and live GUI rendering.

> Example output:
> ```
> Path from (0,0) to (6,6): (0,0) (1,0) (1,1) ... (6,6)
> ```

---

## 🧰 Technologies & Tools Used

| Category         | Tools                   |
|------------------|--------------------------|
| Programming      | C++                      |
| Graphics Library | SDL3                     |
| OS Support       | Windows/Linux            |
| IDE              | VS Code, Code::Blocks    |

---

## 🚀 How to Run

### ⚙️ Prerequisites
- SDL3 installed and linked properly
- g++ or other C++ compiler

### 🧪 Build & Execute
```bash
g++ Rat_Maze.cpp -o Rat_Maze -lSDL3
./Rat_Maze
```

---

## ✨ Features

- ✅ Backtracking maze solver
- ✅ Dynamic path recording
- ✅ Graphical visualization using SDL3
- ✅ Clean and modular structure

---

## 🚧 Future Enhancements

- Accept maze from file or user input
- Add animation to show path in real time
- Sound or feedback when goal is reached
- Support for multiple rats or randomized mazes

---

## 👤 Author

| Name           | GitHub Profile                                 |
|----------------|------------------------------------------------|
| Mohamed Hany   | [@mohamedhanyhemdan](https://github.com/mohamedhanyhemdan) |

---

## 📚 Course Info

- **Course:** Mastering Data Structures & Algorithms in C and C++  
- **Instructor:** Abdul Bari  
- **Platform:** Udemy  
- **Link:** [Course Link](https://www.udemy.com/course/datastructurescncpp/)

---
