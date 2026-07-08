// Interface file of main module (Main module of the program)
// <===============================================================================>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h" 

// Definitions Layer 
// <*******************************************************************************>

// Module specific definitions, macros 
// <------------------------------------------------------------------------------->
#define FLAG "-m"

// <------------------------------------------------------------------------------->

// Global variable initialisations 
// <------------------------------------------------------------------------------->
const HeaderStrings header_strs = {
    .layer1_str = "// Definitions Layer",
    .layer1_p1_str = "// Global definitions, macros",
    .layer1_p2_str = "// Structures",
    .layer1_p3_str = "// Global variables",
    .layer2_str = "// Interface Layer",
    .layer2_p1_str = "// Public function declarations ",
    .layer3_str = "// Internals Layer",
    .layer3_p1_str = "// Private function declarations ", 
};

const InterfaceStrings interface_strs = {
    .layer1_str = "// Definitions Layer", 
    .layer1_p1_str = "// Module specific definitions, macros",
    .layer1_p2_str = "// Global variable initialisations",
    .layer2_str = "// Execution Layer",
    .layer2_p1_str = "// Main function",
    .layer3_str = "// Interface function initialisations", 
};

const UtilitiesStrings utilities_strs = {
    .layer1_str = "// Initialisation Layer", 
    .layer1_p1_str = "// Internal function initialisations",
};

const DelimitersStrings delimiter_strs = {
    .global_delim_str = "// <===========================================================================>",
    .layer_delim_str = "// <*******************************************************************************>",
    .sublayer_delim_str = "// <------------------------------------------------------------------------------->",
}; 

const char *main_str = "(Main module of the program)"; 
const char *main_str_fun = "// Main function";
// <------------------------------------------------------------------------------->

// <*******************************************************************************>

// Execution Layer 
// <*******************************************************************************>

// Main function 
// <------------------------------------------------------------------------------->

int main(int argc, char **argv) {

    // Check whether the minimum number of command-line arguments is correct
    if (argc < 2) {
        printf("Invalid usage.\n./emg [-m] <module_0> <module_1> ... <module_n>\n"); 
        printf("[-m] flag signifies that first module passes is main module\n"); 
        exit(EXIT_FAILURE); 
    }

    // Check whether if second argument is flag then there's at least 
    // 3 command-line arguments
    if (strcmp(FLAG, argv[1]) && argc < 3) {
        printf("Invalid usage.\nDid not provide the name of the main module.\n"); 
        exit(EXIT_FAILURE); 
    }

    // At this point, command-line arguments are correct 

    // Checking if main module exists, and setting start index based on that
    bool has_main = !strcmp(FLAG, argv[1]);     // Flag which tells if program has main module
    int index = has_main ? 3 : 2;               // Starting index of the modules in argv array

    // Create a main module if one exist
    if (has_main) {
        if (!make_main(argv[2])) {
            printf("Main module couldn't be created.\n"); 
            exit(EXIT_FAILURE); 
        }
    }

    // Create rest of the modules
    for (int i = index; i < argc; i++) {
        if (!make_module(argv[i])) {
            printf("Module %s couldn't be created.\n", argv[i]); 
            exit(EXIT_FAILURE);
        }
    }

    exit(EXIT_SUCCESS); 
}

// <------------------------------------------------------------------------------->

// <*******************************************************************************>

// <===============================================================================>