#include <stdio.h>

int main() {
    int choice;

    printf("Select a course by entering the corresponding number:\n");
    printf("1. btech(cse)\n");
    printf("2. btech(aiml)\n");
    printf("3. btech(ece)\n");
    printf("4. btech(mech)\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You selected btech(cse).\n");
            break;
        case 2:
            printf("You selected btech(aiml).\n");
            break;
        case 3:
            printf("You selected btech(ece).\n");
            break;
        case 4:
            printf("You selected Chemistry.\n");
            break;
        default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}
