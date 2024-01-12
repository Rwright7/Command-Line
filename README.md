# Command Line

## Description
This project is a simple command line-based program written in C that allows users to create and store variables with string values. The program provides a basic interface for user input and variable management.

## Files
1. **main1.c**
   - This file contains the main program logic, including setup, the main loop, and the main function.
   - It utilizes the `stc/cstr` library for string manipulation and a custom split function to parse user input.
   - The program supports the creation and retrieval of variables, checking for valid variable names.

2. **splitfunction.h**
   - This header file declares an external function used in `main1.c` to split the input into left and right components around the "=" character.

3. **splitfunction.c**
   - This file defines the external function `splitfunction`, which is responsible for splitting the input into left and right components.

4. **validVarName.h**
   - This header file declares a function used in `main1.c` to check the validity of variable names.

5. **validVarName.c**
   - This file defines the function `validVarName`, which checks if a given string is a valid variable name based on certain criteria.

## Usage
1. **Compilation:**
   - Compile the program using a C compiler. For example:
     ```bash
     gcc main1.c splitfunction.c validVarName.c -o my_terminal_program
     ```

2. **Execution:**
   - Run the compiled executable:
     ```bash
     ./my_terminal_program
     ```

3. **Terminal Interface:**
   - The program will display a new terminal prompt.
   - Use the ">>" prompt to enter commands.
   - Commands can be variable assignments (e.g., `var_name = value`) or variable retrievals (e.g., `var_name`).

## Example
```plaintext
 ----(NEW terminal) ----
>> my_var = Hello
>> my_var
Hello
>> invalid_var! = Error   // Invalid variable name
Invalid variable name
>> another_var
No value entered
```

## External Libraries
   - This project uses the `stc/cstr` library for efficient string manipulation.

## Note
   - Do not change the main() function as it handles the program setup and main loop.


## Project Status
   - Incomplete