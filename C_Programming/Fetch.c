#include <stdio.h>
#include <stdint.h>

#define MEMORY_SIZE 256  // Define the size of memory

// Simulated memory and registers
uint8_t memory[MEMORY_SIZE]; // Memory to hold instructions and data
uint16_t program_counter = 0; // Program counter pointing to the instruction
uint8_t instruction_register; // Register to hold the fetched instruction

// Function to simulate fetching an instruction from memory
void fetch_instruction() {
    // Fetch the instruction from memory at the address pointed to by the program counter
    instruction_register = memory[program_counter];

    // Increment the program counter to point to the next instruction
    program_counter++;
    
    printf("Fetched Instruction: 0x%02X\n", instruction_register);
    printf("Updated Program Counter: %d\n", program_counter);
}

// Initialize memory with some sample instructions
void initialize_memory() {
    memory[0] = 0x1A; // Sample instruction
    memory[1] = 0x2B; // Sample instruction
    memory[2] = 0x3C; // Sample instruction
}

int main() {
    initialize_memory();
    
    // Simulate fetching instructions
    for (int i = 0; i < 3; i++) {
        fetch_instruction();
    }
    
    return 0;
}