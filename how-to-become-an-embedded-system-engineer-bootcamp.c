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

// Entry iterating modules with progress output
int main(void) { // Begin main function
  printf("How to Become an Embedded System Engineer Bootcamp\n"); // Title
  for (int i = 0; i < 5; ++i) { // Loop modules
    printf("Module %d: %s\n", i + 1, modules[i]); // Print current module
    usleep(200000); // Delay 200 ms
  } // End loop
  return 0; // Exit success
} // End main

