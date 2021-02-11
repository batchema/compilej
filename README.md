# CompileJ: A J compiler
## Description
This is a suite of utility functions to generate assembly (.asm) files from J language files (.j)
J is a stack-oriented language loosely inspired by [Forth](https://en.wikipedia.org/wiki/Forth_(programming_language)). The J language used for this project is not the same as the [J Software](https://www.jsoftware.com/#/) language.

## Project structure
- `Makefile`: file defining the `make` command options  
- `jc.c`: main file. Reads in .j files as command line arguments and return .asm files.  
- `parser.c`: Set of utility functions for outputting Assembly code from J tokens
- `parser.h`: Header file for parser.c
- `token.c`: Set of utility functions to parse .j files into tokens
- `token.h`: Header file for token.c
- `utils.c`: Meant for utility functions used by more than one file
- `utils.h`: Header file for utils.c

## Commands
- `make jc`: Make the entire project
- `make token`: Make files related to J tokens parsing
`./jc foo.j bar.j` produces `foo.asm`

## PS
The .c files are held in a private repo per course plagiarism prevention policy. Please reach out to me if you're non-Penn affiliated and would like to take a look. 