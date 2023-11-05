
![Banner](https://github.com/byaliego/42-project-badges/blob/main/covers/cover-ft_printf-bonus.png?raw=true)

## About

`ft_printf` is a project at [42](https://www.42.fr/) that involves implementing a simplified version of the standard C library function `printf`. The goal is to parse and format various types of data and output the formatted result to the standard output. This project aims to deepen your understanding of variadic functions and string manipulation.

## Usage

To use `ft_printf` in your project, follow these steps:

1. Clone the repository to your local machine:

   ```
   git clone [repository_url]
   ```
2. Include the ft_printf.h header file in your project:
    ´´´
    #include "ft_printf.h"
    ´´´
3. Compile your project with the ft_printf.c file:
    ```
    gcc your_file.c ft_printf.c -o your_executable
    ```
4. Use ft_printf as you would use the standard printf function in your code.

## Format Specifiers
`ft_printf` supports the following format specifiers:

* `%c`: Character
* `%s`: String
* `%p`: Pointer
* `%d` or `%i`: Signed decimal integer
* `%u`: Unsigned decimal integer
* `%x`: Hexadecimal representation (lowercase)
* `%X`: Hexadecimal representation (uppercase)
* `%o`: Octal representation
* `%f`: Floating-point representation

## Compilation
The project can be compiled using the provided Makefile. Simply run:

    make

This will generate the libftprintf.a library.

## Example
    #include "ft_printf.h"

    int main(void)
    {
        ft_printf("Hello, %s! My age is %d.\n", "42", 25);
        return 0;
    }

## Notes
- Handle errors and edge cases gracefully.
- The project involves managing the variable argument list using the stdarg header.
- Refer to the project's PDF for detailed instructions and requirements.


## Author

Yashdev Singh (Ysingh)
