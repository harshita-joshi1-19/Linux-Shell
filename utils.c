#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

// Function to display the shell prompt
void displayPrompt() {
    printf("ScriptWarrior$ ");
    fflush(stdout);
}

// Function to automate tasks such as file listing and disk usage
void automateTask() {
    printf("Running automation tasks (file listing + disk usage)...\n");
    
    // Execute the 'ls -l' command and check for errors
    if (system("ls -l") == -1) {
        perror("Error executing ls command");
    }
    
    // Execute the 'du -sh .' command and check for errors
    if (system("du -sh .") == -1) {
        perror("Error executing du command");
    }
}