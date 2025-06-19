
// File creating or opening in C
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("data.txt", "w");

    // Check if the file is created successfully
    if (fptr == NULL)
    {
        printf("Error opening the FILE\n");
        return 1;
    }

    fclose(fptr); // Close the file properly
    return 0;
}
