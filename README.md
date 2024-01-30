# C_Runtime_Memory_Exploration
This GitHub repository, "C_Runtime_Memory_Exploration," is a collection of C programming tasks centered around in-depth exploration and understanding of memory management, pointer usage, and debugging techniques in C. The repository is divided into five distinct tasks, each focusing on a specific aspect of C programming and memory handling.

Memory Layout Diagram (layout_1.c): This task involves using a debugger (gdb or lldb) to probe the memory layout of a running C program. The objective is to understand the run-time stack's memory layout by examining variables' addresses and values. Users will generate a stack layout diagram from the observed data, focusing on understanding how the stack is utilized during function calls and variable allocations.

Segmentation Fault Analysis (segfault_2.c): This task addresses the common issue of segmentation faults in C programming. The program is designed to intentionally cause a segmentation fault, allowing users to use a debugger to trace the source of the error. The task helps in understanding memory access violations and the importance of proper pointer usage.

Bad Code - Stack and Pointer Issues (example_3.c): This code sample contains intentional bugs related to stack and pointer management. Users are expected to trace through the program, identify the bugs, and understand why they occur. The task emphasizes the importance of correct memory and pointer handling in C programming.

Introduction to Valgrind (valgrind_example.c): This task introduces the use of Valgrind, a tool for memory debugging, memory leak detection, and profiling. Users will compile and execute an example program, using Valgrind to identify and understand common memory-related errors.

Command-line Arguments (command_5.c): This program is focused on handling command-line arguments in C. It involves writing a program that processes command-line inputs, specifically printing out arguments that begin with a '-' character. This task demonstrates the handling of command-line parameters and string manipulation in C.
