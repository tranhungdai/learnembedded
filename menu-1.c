#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s option1 option2 option3 ...\n", argv[0]);
        return 1;
    }

    printf("Menu:\n");
    for (int i = 1; i < argc; i++) {
        printf("%d. %s\n", i, argv[i]);
    }

    int choice;
    printf("Select the choices (1-%d): ", argc - 1);
    scanf("%d", &choice);

    if (choice < 1 || choice >= argc) {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Your choice: %s\n", argv[choice]);

    return 0;
}
