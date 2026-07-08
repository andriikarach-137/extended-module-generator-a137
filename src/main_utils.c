// Utilities file of main module (Main module of the program)
// <===============================================================================>

#include <stdio.h>
#include <stdlib.h>

#include "main.h"

// Initialisation Layer 
// <*******************************************************************************>

// Internal function initialisations
// <------------------------------------------------------------------------------->

typedef struct {
    char *layer1_str;           // Layer one string
    char *layer1_p1_str;        // Layer one part one string
    char *layer1_p2_str;        // Layer 1 part two string
    char *layer1_p3_str;        // Layer one part three string
    char *layer2_str;           // Layer two string
    char *layer2_p1_str;        // Layer two part one string 
    char *layer3_str;           // Layer three string
    char *layer3_p1_str;        // Layer three part 1 string
} HeaderStrings;

void make_header_file(FILE *fptr, char *name, bool is_main) {

    if (is_main) {
        fprintf(fptr, "Header file of %s module %s\n", name, main_str);
    } else {
        fprintf(fptr, "Header file of %s module\n", name); 
    }

    fprintf(fptr, "%s\n", delimiter_strs.global_delim_str);
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", header_strs.layer1_str); 
    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n");  

    fprintf(fptr, "%s\n", header_strs.layer1_p1_str); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 

    fprintf(fptr, "%s\n", header_strs.layer1_p2_str); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", header_strs.layer1_p3_str); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n"); 

    fprintf(fptr, "%s\n", header_strs.layer2_str); 
    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", header_strs.layer2_p1_str); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 

    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", header_strs.layer3_str); 
    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", header_strs.layer3_p1_str); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 

    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", delimiter_strs.global_delim_str); 
}

void make_interface_file(FILE *fptr, char *name, bool is_main) {
    return; 
}

void make_utils_file(FILE *fptr, char *name, bool is_main) {
    return; 
}

// <------------------------------------------------------------------------------->

// <*******************************************************************************>

// <===============================================================================>F