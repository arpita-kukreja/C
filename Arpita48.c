#include <stdio.h>

int main() {
  // Declare a FILE type pointer variable to store reference of file, say FILE * fPtr = NULL;
  FILE *fp = NULL;
  char name[20];
  int age;

  // Create or open file using fopen() function. The 'w' mode tells fopen() to create the file if it does not exist.
  fp = fopen("data.txt", "w");

  // Check if file is created successfully
  if (fp == NULL) {
    printf("Error creating file.\n");
    return 1;
  }

  // Input data from user to write into file, store it to some variable say data
  printf("Enter name: ");
  scanf("%s",name);
  printf("Enter age: ");
  scanf("%d",&age);
  fprintf(fp,"Name: %s\n",name);
  fprintf(fp,"Age: %d\n",age);
  // Write data to file using fputs() function. fputs() writes a string to the file.


  // Close the file using fclose() function
  fclose(fp);

  printf(" Data written to the file successfully.\n");

  return 0;
}