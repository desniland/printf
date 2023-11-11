#printf

#The printf function is used for formatted output. It takes a format string as its first argument, followed by additional arguments that match the placeholders in the format string. These placeholders indicate the type and position of the variables to be printed. This function is being developed in C programming language.

## Features
1. **Format Specifiers:**
   - `%d`: Decimal (integer) output.
   - `%c`: Character output.
   - `%s`: String output.
   - `%f`: Floating-point (decimal) output.
   - `%p`: Pointer address output.
   - `%o`: Octal output.
   - `%x` or `%X`: Hexadecimal output (lowercase or uppercase).
   - `%u`: Unsigned decimal output.
2. **Width and Precision:**
   - You can specify the minimum width and precision of the output.
   - Example: `%5d` specifies a minimum width of 5 characters for an integer.
3. **Flags:**
   - `-`: Left-justify the output.
   - `+`: Display the sign for positive numbers.
   - `0`: Pad with zeros instead of spaces.
   - `#`: Alternate form (for certain specifiers like `%o` and `%x`).
4. **Modifiers:**
   - `h`: Short (half-size) integer.
   - `l`: Long integer.
   - `L`: Long double.
5. **Escape Sequences:**
   - `%%`: Prints a literal `%` character.
6. **Printing Special Characters:**
   - `\n`: Newline.
   - `\t`: Tab.
   - `\"`: Double quote.
   - `\'`: Single quote.
   - `\\`: Backslash.
7. **Variable Arguments:**
   - `printf` supports a variable number of arguments. The number and types of arguments depend on the format string.
8. **Return Value:**
   - `printf` returns the number of characters printed (excluding the null terminator), or a negative value if an error occur
## Getting Started
The code must be compiled this way:

**$ gcc -Wall -Werror -Wextra -pedantic *.c**

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

The main files will include your main header file (main.h): **#include “main.h

## Usage

#include “main.h”

int main() {
    // Your code examples here
    printf("Hello, World!\n");
    return 0;
}
```

## Contributing

If you'd like to contribute to this project, please follow these guidelines:

- Fork the repository
- Create a new branch for your feature or bug fix
- Make your changes and submit a pull request
## Acknowledgments
Desmond Mariwa
#### Resources

------------

Secrets of printfby Don colton
https://www.cypress.com/file/54761/download

## Contact
You can reach me at albertdesmond26@gmail.com
