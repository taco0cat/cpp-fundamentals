# ⚡ C++ Fundamentals & Course Prep

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![VS Code](https://img.shields.io/badge/VS%20Code-007ACC?style=for-the-badge&logo=visual-studio-code&logoColor=white)
![Status](https://img.shields.io/badge/Status-Enrolled-success?style=for-the-badge)
![GitHub last commit](https://img.shields.io/github/last-commit/taco0cat/cpp-fundamentals?style=for-the-badge&color=blue)

Welcome to my central C++ repository. This project documents my preparation for my upcoming university Computer Science course, combined with self-study from industry-standard resources.

## 📚 Learning Resources

My learning path is a hybrid of university curriculum and these external resources:

1.  **[LearnCpp.com](https://www.learncpp.com/):** The primary documentation for deep dives and best practices.
2.  **[Bro Code C++ Playlist](https://www.youtube.com/playlist?list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on):** For visual learning and syntax basics.
3.  **[W3Schools](https://www.w3schools.com/cpp/):** For quick syntax lookups and references.

---

## 🎓 Module 1: University Syllabus
*Target: University Course Preparation*

This module strictly covers the concepts outlined in the course description: *"Overview of computer architecture, statements, expressions, control structures, pointers, and modular programming."*

<details>
<summary><strong>👇 View the Course Syllabus & Progress</strong></summary>
<br>

| Status | Topic | Concepts Covered |
| :---: | :--- | :--- |
| ✅ | **Architecture** | CPU, Memory, I/O, Bus Systems |
| ⬜ | **Basics** | Syntax, `main()`, Comments, Libraries |
| ⬜ | **Data Types** | `int`, `float`, `char`, `bool`, Scope |
| ⬜ | **I/O** | `cin`, `cout`, Formatting |
| ⬜ | **Operators** | Arithmetic, Relational, Logical (AND/OR/NOT) |
| ⬜ | **Control Flow** | `if/else`, Nested Conditionals, Switch |
| ⬜ | **Loops** | `while`, `do-while`, `for`, `break/continue` |
| ⬜ | **Functions** | Definitions, Parameters, Modular Programming |
| ⬜ | **Arrays** | 1D Arrays, Iteration, Multidimensional |
| ⬜ | **Strings** | C-style strings vs `std::string` |
| ⬜ | **Pointers** | Memory Addresses, Dereferencing, Args |
| ⬜ | **File I/O** | Reading/Writing text files (`fstream`) |

</details>

---

## 🛠️ Module 2: Extended Concepts (Self-Study)
*Target: Deep Understanding & Projects*

These topics go beyond the syllabus but are necessary for building real projects (as recommended by LearnCpp and Bro Code).

| ID | Concept | Description |
| :--- | :--- | :--- |
| **01** | **Number Systems** | Binary & Hexadecimal representations. |
| **02** | **Compilation** | Preprocessor → Compiler → Linker workflow. |
| **03** | **References** | Pass-by-Reference (`&`) vs Pointers. |
| **04** | **Pointer Math** | Arithmetic operations on memory addresses. |
| **05** | **Headers** | Creating `.h` and `.cpp` files for code separation. |
| **06** | **OOP Basics** | Classes and Objects (Future Prep). |

---

## ⚡ How to Run

### Option 1: VS Code (Recommended)
This repo is configured with `tasks.json` for MinGW (g++).

1.  Open any `.cpp` file (e.g., `helloworld.cpp`).
2.  Press **`Ctrl + Shift + B`** to build the active file.
3.  The executable will be created in the same folder.
4.  Run it in the terminal:
    ```bash
    .\helloworld.exe
    ```

### Option 2: Command Line (Manual)
If you prefer manual compilation:

```bash
g++ filename.cpp -o outputname
.\outputname.exe