# C Systems Mastery

This repository documents my long-term journey toward deep C programming mastery, with a focus on memory, pointers, data structures, algorithms, systems programming, debugging, and compiler/runtime engineering foundations.

The purpose of this repository is not simply to learn C syntax. The goal is to build serious, recruiter-visible projects that demonstrate practical understanding of low-level programming, manual memory management, pointer behavior, file I/O, modular C design, Unix-style tools, process control, threading, parsing, bytecode execution, and runtime design.

This repository is part of my broader preparation for a future career direction in compiler/runtime engineering. For now, the focus is on building strong foundations in C/C++, math, systems thinking, and clean engineering practice while continuing my PhD dissertation work.

---

## Repository Goal

The goal of this repository is to complete 17 progressively structured C projects.

Each project builds on the previous one:

1. Core C fluency
2. String and character handling
3. Pointer and memory understanding
4. Dynamic arrays and manual memory management
5. Dynamic strings and safe buffer growth
6. Matrix and numerical programming
7. File I/O and record management
8. CSV parsing and data analysis
9. Data structures
10. Algorithms
11. Unix-style command-line tools
12. Memory tracking and debugging
13. Modular C project organization
14. Process control and shell behavior
15. Threads and runtime scheduling
16. Parsing and interpretation
17. Bytecode virtual machine design

By the end of this repository, I want to have a strong body of work showing that I understand C beyond surface-level programming.

---

## Project List

| # | Project | Focus Area | Status |
|---|---------|------------|--------|
| 01 | C Utility Programs Collection | Core syntax, functions, loops, arrays, structs | Not Started |
| 02 | Custom C String Library | Strings, pointers, null terminators, buffers | Not Started |
| 03 | Pointer Laboratory and Memory Visualizer | Pointers, addresses, pointer arithmetic, callbacks | Not Started |
| 04 | Dynamic Array / Vector Library | `malloc`, `realloc`, `free`, ownership | Not Started |
| 05 | Dynamic String Builder | Growable strings, buffer management, safe APIs | Not Started |
| 06 | Matrix and Linear Algebra Library | Dynamic 2D arrays, numerical programming, math in C | Not Started |
| 07 | File-Based Student Database System | Structs, text files, binary files, record handling | Not Started |
| 08 | CSV Parser and Data Analyzer | File parsing, statistics, data processing | Not Started |
| 09 | Data Structures Library | Lists, stacks, queues, trees, heaps, graphs, hash tables | Not Started |
| 10 | Algorithms Library | Sorting, searching, recursion, DP, graph algorithms | Not Started |
| 11 | Command-Line Unix Tools Clone | `cat`, `wc`, `grep`, `cp`, `head`, `tail`, `diff` | Not Started |
| 12 | Memory Leak Checker / malloc-free Tracker | Allocation tracking, leaks, double free, invalid free | Not Started |
| 13 | Modular C Build System Project | Headers, source files, Makefiles, libraries, tests | Not Started |
| 14 | Mini Shell in C | `fork`, `exec`, `wait`, pipes, redirection, signals | Not Started |
| 15 | Thread Pool Runtime in C | `pthreads`, mutexes, condition variables, task queues | Not Started |
| 16 | Math Expression Parser and Interpreter | Tokenizer, parser, AST, symbol table, evaluator | Not Started |
| 17 | Stack-Based Bytecode Virtual Machine | Bytecode, stack execution, VM runtime, disassembler | Not Started |

---

## Project Structure

Each project will follow a clean structure whenever possible:

```text
project_name/
  README.md
  include/
  src/
  tests/
  examples/
  Makefile
  notes.md