#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "auth.h"

void authenticateUser() {
    char username[64], password[64];
    printf("Username: ");
    fflush(stdout);
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = 0;
    printf("Password: ");
    fflush(stdout);
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = 0;
    // ... authentication logic ...
}