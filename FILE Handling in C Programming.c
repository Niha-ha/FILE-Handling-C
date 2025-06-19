// writing_to_file.c
// This program demonstrates basic file handling in C.
// It opens a file, writes text to it, and then closes the file.

#include <stdio.h>

int main() {
    // Declare a file pointer
    FILE *fptr;

    // Open the file in write mode ("w" will overwrite the file as it already exists)
    fptr = fopen("data.txt", "w");

    // Check if the file opened successfully
    if (fptr == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Write a header line to the file
    fprintf(fptr, "--- FILE HANDLING IN C ---\n");

    // Write another line using fputs
    fputs("Now, I am writing in this file.\n", fptr);

    // Close the file to save changes
    fclose(fptr);

    printf("Data successfully written to data.txt\n");

    return 0;
}
