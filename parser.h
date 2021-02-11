/*
 * @author: Batchema Sombie
 * parser.h: header file for parser.c
 * A suite of functions to read
 * j-language tokens from files
 * and write 
 *
 * UPENN CIS 240 HW9
 */

#include <stdio.h>
/*
 * Parse .j file into .asm file
 */
void parse_file(FILE *inputFile, FILE *outputFile);
