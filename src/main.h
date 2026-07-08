// Header file of main module (Main module of the program)
// <===========================================================================>

// Definitions Layer
// <*******************************************************************************>

// Global definitions, macros
// <------------------------------------------------------------------------------->

// <------------------------------------------------------------------------------->

// Structures
// <------------------------------------------------------------------------------->

/**
 * This structure stores string literals required for creating comments
 * inside header file of the extended module                                  
 */
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

/**
 * This structure stores string literals required for creating comments
 * inside interface file of the extended module 
 */
typedef struct {
    char *layer1_str;           // Layer one string 
    char *layer1_p1_str;        // Layer one part one string
    char *layer1_p2_str;        // Layer one part two string
    char *layer2_str;           // Layer two string
    char *layer2_p1_str;        // Layer two part 1 string
    char *layer3_str;           // Layer three string
    char *layer3_p1_str;        // Layer three part one string
} InterfaceStrings;

/**
 * This structure stores string literals required for creating comments
 * inside utilities file of the extended module 
 */
typedef struct {
    char *layer1_str;           // Layer one string
    char *layer1_p1_str;        // Layer one part one string 
} UtilitiesStrings;

/**
 * This structure stores string delimiters required for creating comments
 * that represent delimiters inside all files in the module
 */
typedef struct { 
    char *global_delim_str;     // Global delimiter string 
    char *layer_delim_str;      // Layer delimiter string
    char *sublayer_delim_str;   // Sublayer delimiter string 
} DelimitersStrings; 

// <------------------------------------------------------------------------------->

// Global variables
// <------------------------------------------------------------------------------->

extern HeaderStrings header_strs;           // Stores header file comments
extern InterfaceStrings interface_strs;     // Stores interface file comments
extern UtilitiesStrings utilities_strs;     // Stores utilities file comments
extern DelimitersStrings delimiter_strs;    // Stores delimiter comments

extern char *main_str;                      // Stores main file comment
extern char *main_str_fun;                  // Stores main function comment 

// <------------------------------------------------------------------------------->

// <*******************************************************************************>

// Interface Layer
// <*******************************************************************************>

// Public function declarations 
// <------------------------------------------------------------------------------->

// <------------------------------------------------------------------------------->

// <*******************************************************************************>

// Internals Layer 
// <*******************************************************************************>

// Private function declarations 
// <------------------------------------------------------------------------------->

// <------------------------------------------------------------------------------->

// <*******************************************************************************>

// <===============================================================================>