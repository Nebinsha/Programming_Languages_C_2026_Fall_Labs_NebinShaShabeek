// week5_task1_file_io.c
// Name: Nebin Sha  Surname: Shabeek  Student ID: 251ADB013
//
// Task 1: Read and write data from text files
// Week 5 – Files & Modular Programming
// TODO: Fill in the missing parts marked below.
//
// Build: make lab5   Run: ./bin/week5_task1_file_io

#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_FILENAME "data.txt"
#define LINE_LEN 256

int main(int argc, char* argv[]) {
  FILE* fp = NULL;
  const char* filename = DEFAULT_FILENAME;
  char line[LINE_LEN];
  int line_count = 0;

  if (argc > 1) {
    filename = argv[1];
  }

  printf("Writing lines to %s...\n", filename);
  fp = fopen(filename, "w");

  if (fp == NULL) {  // checking
    perror(filename);
    return EXIT_FAILURE;
  }

  fprintf(fp, "Welcome to Week 5 C programming.\n");  // three lines  to foles
  fprintf(fp, "this program demonstrates text file handling.\n");
  fprintf(fp, "We can write and read data using C.\n");

  fclose(fp);  // closing

  fp = fopen(filename, "r");  // opening to read

  if (fp == NULL) {
    perror(filename);
    return EXIT_FAILURE;
  }

  printf("Reading contents:\n");  // read and print

  while (fgets(line, LINE_LEN, fp) != NULL) {
    printf("%s", line);
    line_count++;
  }

  fclose(fp);  // closing

  printf("Lines read: %d\n", line_count);  // output

  return EXIT_SUCCESS;
}