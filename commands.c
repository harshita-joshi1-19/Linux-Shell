#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include "commands.h"

// Function to execute a command with error handling
void executeCommand(char *input) {
    char *args[MAX_ARGS];
    int i = 0;

    // Tokenize the input command
    args[i] = strtok(input, " ");
    while (args[i] != NULL && i < MAX_ARGS - 1) {
        args[++i] = strtok(NULL, " ");
    }
    args[i] = NULL; // Null-terminate the argument list

    // Fork a new process to execute the command
    pid_t pid = fork();

    if (pid < 0) {
        perror("Fork failed"); // Error handling for fork failure
        exit(1);
    } else if (pid == 0) {
        // Child process
        if (execvp(args[0], args) < 0) {
            perror("Command execution failed"); // Error handling for exec failure
            exit(1);
        }
    } else {
        // Parent process
        if (wait(NULL) < 0) {
            perror("Wait failed"); // Error handling for wait failure
        }
    }
}