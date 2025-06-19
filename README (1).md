
# FileCreatingInC

This C program demonstrates how to **create or open a file** using standard file handling functions in the C language.

---

## 📁 File Name

`FileCreatingInC.c`

---

## 📌 Description

This program uses the `fopen()` function in **write mode ("w")** to either:

- **Create a new file** if it does not exist
- **Open and overwrite** an existing file

It checks if the file was opened successfully and then closes it properly.

---

## 📥 Input

- No user input is required.

---

## 📤 Output

- If successful: The file `data.txt` is created or overwritten in the program’s folder.
- If the file cannot be opened, it displays this message:

```
Error opening the FILE
```

---

## 🧠 Code

```c
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
```

---

## 📚 Resource

- [W3Schools - C File Handling](https://www.w3schools.com/c/c_files.asp)
