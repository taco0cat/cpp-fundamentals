# ⚡ C++ Fundamentals & Course Prep

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![GitHub last commit](https://img.shields.io/github/last-commit/taco0cat/cpp-fundamentals?style=for-the-badge&color=blue)

Welcome to my central C++ repository. This project documents my preparation for my upcoming university Computer Science course, combined with self-study from industry-standard resources.

## 📚 Learning Resources

My learning path is a hybrid of university curriculum and these external resources:

1.  **[LearnCpp.com](https://www.learncpp.com/):** The primary documentation for deep dives and best practices.
2.  **[Bro Code C++ Playlist](https://www.youtube.com/playlist?list=PLZPZq0r_RZOMHoXIcxze_lP97j2Ase2on):** For concept based projects.
3.  **[W3Schools](https://www.w3schools.com/cpp/):** For quick syntax lookups and references.

---

## 🎓 Module 1: University Syllabus
*Target: Complete Course Coverage (Weeks 1-16)*

This module strictly follows the "Course Topics and Schedule" from the university syllabus.

<details open>
<summary><strong>👇 View the Course Syllabus & Progress</strong></summary>
<br>

| Status | Week | Topic | Concepts Covered |
| :---: | :---: | :--- | :--- |
| ✅ | **1** | **Intro & Setup** | Phases of development, VS Code Setup, `main()` |
| ✅ | **2** | **Variables** | Expressions, Data Types, Arithmetic Operators |
| ⬜ | **3** | **Conditionals** | `if`, `else if`, `switch` statements |
| ⬜ | **4** | **Loops** | `while`, `do-while`, `for` loops |
| ⬜ | **5** | **Nested Loops** | Loops inside loops, Flowcharts |
| ⬜ | **6** | **Functions I** | Definitions, Calling functions, Return values |
| ⬜ | **7** | **Functions II** | **Overloading**, Default Args, **Pass-by-Reference** |
| ⬜ | **8** | **Arrays I** | 1D Arrays, Iterating through data |
| ⬜ | **9** | **Arrays II** | **2D Arrays** (Matrices), Nested loop iteration |
| ⬜ | **10** | **Arrays & Funcs** | Passing arrays to functions |
| ⬜ | **11** | **Strings** | **C-Strings** (Null-terminated character arrays) |
| ⬜ | **12** | **File I/O** | Reading/Writing text files (`fstream`) |
| ⬜ | **13** | **Pointers** | Memory Addresses, Dereferencing |
| ⬜ | **14** | **Dynamic Memory** | Heap vs Stack, `new` and `delete` keywords |
| ⬜ | **15** | **Review** | Revision of all concepts |
| ⬜ | **16** | **Final** | Final Exam / Capstone Project |

</details>

---

## 🛠️ Module 2: Extended Concepts (Self-Study)
*Target: Deep Understanding & Projects*

These topics go beyond the syllabus but are necessary for effective "Modular Programming" and understanding how C++ works under the hood.

| ID | Concept | Description |
| :--- | :--- | :--- |
| **01** | **Number Systems** | Binary & Hexadecimal representations. |
| **02** | **Compilation** | Preprocessor → Compiler → Linker workflow. |
| **03** | **Pointer Math** | Arithmetic operations on memory addresses. |
| **04** | **Header Files** | Creating `.h` and `.cpp` files for code separation. |
| **05** | **Preprocessor** | Macros, Guards, and `#define`. |
| **06** | **OOP Basics** | Classes and Objects (Future Prep). |

---

## ⚡ How to Run

### Option 1: VS Code (Recommended)
This repo is configured with `tasks.json` for MinGW (g++).

1.  Open any `.cpp` file (e.g., `01-variables.cpp`).
2.  Press **`Ctrl + Shift + B`** to build the active file.
3.  The executable will be created in the same folder.
4.  Run it in the terminal:
    ```bash
    .\01-variables.exe
    ```

### Option 2: Command Line (Manual)
If you prefer manual compilation:

```bash
g++ filename.cpp -o outputname
.\outputname.exe
```
## 🧠 Key Learnings Log
*A living document of "Aha!" moments and technical discoveries.*

* **Memory Management:** Understanding that Pointers (`*`) store addresses, not values, and are crucial for efficiency.
* **Strict Typing:** C++ requires declaring types (`int`, `char`) upfront, unlike JavaScript's dynamic typing.
* **Compilation:** C++ compiles to machine code (`.exe`) before running, whereas JS is interpreted by the browser.

---
*Created by [taco0cat](https://github.com/taco0cat)*