/*
 * Course: How To Become An Embedded System Engineer Bootcamp
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * 
 * Description:
 * This code demonstrates the core concepts taught in the "How To Become An Embedded System Engineer Bootcamp" course.
 * It provides a practical implementation that students can study, modify, and
 * use as a foundation for their own projects.
 * 
 * Learning Objectives:
 * - Understand the fundamental principles covered in this course
 * - Practice implementing the concepts with real code
 * - Build a working example that can be extended
 * 
 * Hardware Requirements:
 * - Development board (Embedded Systems)
 * - Components as specified in CIRCUIT.md
 * - USB cable for programming
 * 
 * Pin Connections:
 * Refer to CIRCUIT.md for detailed wiring diagrams and pin assignments.
 * 
 * Usage:
 * 1. Review the code structure and comments
 * 2. Connect hardware according to CIRCUIT.md
 * 3. Upload code to your development board
 * 4. Monitor serial output for debugging
 * 
 * Course Link: https://www.udemy.com/course/how-to-become-an-embedded-system-engineer-bootcamp/
 * Repository: https://github.com/engasm89/how-to-become-an-embedded-system-engineer-bootcamp
 * 
 * Copyright (c) 2025 Ashraf S A AlMadhoun
 * Licensed under MIT License
 */

/*
 * Course: How To Become An Embedded System Engineer Bootcamp
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

/*
 * Course: How To Become An Embedded System Engineer Bootcamp
 * Platform: Embedded Systems
 * Author: Ashraf S A AlMadhoun
 * Purpose: Auto-generated metadata block to document the learning goals.
 * Notes: Auto-generated metadata block (2025-11-18)
 */

#include <stdio.h> // Include I/O for bootcamp logs
#include <unistd.h> // Include POSIX sleep for timing

// Simulated bootcamp modules
static const char *modules[] = { // Define module names
  "GPIO", // Module 1
  "Timers", // Module 2
  "Interrupts", // Module 3
  "Communication", // Module 4
  "RTOS" // Module 5
}; // End array

// Program entry point iterating modules with progress output
// Main routine: orchestrates the how to become an embedded system engineer bootcamp scenario
int main(void) { // Main function implementation function
  printf("How to Become an Embedded System Engineer Bootcamp\n"); // Title
  for (int i = 0; i < 5; ++i) { // Loop modules
    printf("Module %d: %s\n", i + 1, modules[i]); // Print current module
    usleep(200000); // Delay 200 ms
  } // End loop
  return 0; // Exit successfully
} // End of main function

