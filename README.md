# 📄 FILE Creating and Writing to It Using C Programming

This C program demonstrates **basic file handling** in the C language. It shows how to **open (or create) a file**, **write text** to it, and **close the file** properly.

---

## � Program Overview

- Opens or creates a file named `data.txt`
- Writes two lines of text to the file:
  - One using `fprintf()` for formatted output
  - Another using `fputs()` for simple string output
- Displays success or error messages in the console
- Closes the file properly to ensure data is saved

---

## 🧠 Key Functions Used

| Function     | Purpose                                           |
|--------------|---------------------------------------------------|
| `fopen()`    | Opens/creates a file in the specified mode        |
| `fprintf()`  | Writes formatted text to the file                 |
| `fputs()`    | Writes a string to the file                       |
| `fclose()`   | Closes the file                                   |

---

## 📁 File Structure

- `FILE Handling in C Programming.c`: The main C source code file
- `data.txt`: The file created or overwritten by the program

---

## 💻 Source Code

```c
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

```

---

## 📚 Resource

- [W3Schools - C File Handling](https://www.w3schools.com/c/c_files.asp)
