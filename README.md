# file-handling-program
*COMPANY*: CODTECH IT SOLUTIONS PVT.LTD
**NAME*: SHYAM CHARAN MURMU
*INTERN ID*: CT04DG256
*DOMAIN*: C LANGUAGE
*DURATION*: 4 WEEKS
*MENTOR*: NEELA SANTOSH KUMAR
# This C program is a command-line utility designed to perform basic file operations such as writing, appending, and reading text files. It provides a user-friendly interface through a menu-driven system, allowing users to interact with files by entering simple numeric choices. The program is structured to handle user input efficiently and includes error-checking mechanisms to ensure smooth execution even when unexpected conditions arise, such as missing files or permission issues.

The core functionality of the program is divided into three main operations. The first operation allows users to write content to a file. When this option is selected, the program either creates a new file or overwrites an existing one with the user-provided text. This is particularly useful when the user wants to start fresh with a new file or replace the contents of an old one. The program prompts the user to enter the desired text, which is then saved to the specified file.

The second operation enables users to append content to an existing file. Unlike the write operation, this function preserves the existing content and adds new text to the end of the file. This is ideal for situations where users want to maintain a running log or add incremental updates without losing previously stored data. The program ensures that the file is accessible and ready for appending before accepting user input and saving it.

The third operation is designed for reading and displaying the contents of a file. When this option is selected, the program opens the specified file in read mode and prints its contents to the console. This feature is helpful for users who want to verify what has been written or appended to the file. It reads the file character by character and displays it in a clean and readable format, making it easy to review the stored information.

The user interface is implemented through a loop that continuously displays a menu until the user chooses to exit. This loop allows users to perform multiple operations on the same file without restarting the program. Input validation is included to handle incorrect or unexpected inputs gracefully. For example, if a non-numeric value is entered when a menu option is expected, the program detects the error and exits with an appropriate message.

Overall, this program serves as a practical example of file handling in C. It demonstrates how to use standard file I/O functions to interact with text files and how to structure a program for modularity and ease of use. The separation of concerns into distinct functions for writing, appending, and reading makes the code more maintainable and easier to understand. This utility can be a helpful tool for beginners learning file operations or for anyone needing a lightweight file editor in a terminal environment.


#OUTPUT: 
