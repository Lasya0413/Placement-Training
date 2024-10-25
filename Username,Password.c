#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20], correctUsername[] = "admin", correctPassword[] = "password123";
    int attempts = 3;

    printf("Enter username: ");
    scanf("%s", username);

    if (strcmp(username, correctUsername) != 0) {
        printf("Wrong user\n");
        return 0;
    }

    while (attempts > 0) {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correctPassword) == 0) {
            printf("Login successful!\n");
            return 0;
        } else {
            printf("Sorry, wrong password. %d attempts remaining.\n", attempts - 1);
            attempts--;

            if (attempts == 0) {
                printf("Account blocked.\n");
                return 0;
            }
        }
    }

    return 0;
}