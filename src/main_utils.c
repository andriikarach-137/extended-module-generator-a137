// Utilities file of main module (Main module of the program)
// <===============================================================================>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "main.h"

// Initialisation Layer 
// <*******************************************************************************>

// Internal function initialisations
// <------------------------------------------------------------------------------->

bool make_module(char *name, bool is_main) {

    // Open all 3 files

    // Open header file
    char header_name[100]; 
    sprintf(header_name, "%s.h", name); 
    FILE *header = fopen(header_name, "a"); 
    if (header == NULL) {
        printf("Error. Couldn't create header file of %s module\n", name); 
        return false;  
    }

    // Open interface file
    char interface_name[100];
    sprintf(interface_name, "%s.c", name);
    FILE *interface = fopen(interface_name, "a"); 
    if (interface == NULL) {
        printf("Error. Couldn't create interface file of %s module\n", name); 
        return false; 
    }

    // Open utilities file 
    char utils_name[100];  
    sprintf(utils_name, "%s_utils.c", name);
    FILE *utils = fopen(utils_name, "a"); 
    if (utils == NULL) {
        printf("Error. Couldn't create utilities fiel of %s module\n", name); 
        return false; 
    }

    // Write comments to files 
    make_header_file(header, name, is_main); 
    make_interface_file(interface, name, is_main); 
    make_utils_file(utils, name, is_main); 

    return true; 
}

void make_header_file(FILE *fptr, char *name, bool is_main) {

    if (is_main) {
        fprintf(fptr, "// Header file of %s module %s\n", name, main_str);
    } else {
        fprintf(fptr, "// Header file of %s module\n", name); 
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
    
    if (is_main) {
        fprintf(fptr, "// Interface file of %s module %s\n", name, main_str);
    } else {
        fprintf(fptr, "// Interface file of %s module\n", name); 
    }

    fprintf(fptr, "%s\n", delimiter_strs.global_delim_str);
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", interface_strs.layer1_str); 
    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n"); 

    fprintf(fptr, "%s\n", interface_strs.layer1_p1_str); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", interface_strs.layer1_p2_str); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n"); 

    if (is_main) {
        fprintf(fptr, "%s\n", interface_strs.layer2_str); 
    } else {
        fprintf(fptr, "%s\n", interface_strs.layer3_str); 
    }
    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n");

    if (is_main) {
        fprintf(fptr, "%s\n", interface_strs.layer2_p1_str);
    } else {
        fprintf(fptr, "%s\n", interface_strs.layer3_p1_str);
    }
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 

    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", delimiter_strs.global_delim_str); 
}

void make_utils_file(FILE *fptr, char *name, bool is_main) {
    
    if (is_main) {
        fprintf(fptr, "// Utilities file of %s module %s\n", name, main_str);
    } else {
        fprintf(fptr, "// Utilities file of %s module\n", name); 
    }

    fprintf(fptr, "%s\n", delimiter_strs.global_delim_str);
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", utilities_strs.layer1_str); 
    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", utilities_strs.layer1_p1_str); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n"); 
    fprintf(fptr, "%s\n", delimiter_strs.sublayer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", delimiter_strs.layer_delim_str); 
    fprintf(fptr, "\n");

    fprintf(fptr, "%s\n", delimiter_strs.global_delim_str); 
}

// <------------------------------------------------------------------------------->

// <*******************************************************************************>

// <===============================================================================>F