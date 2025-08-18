#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s filename\n", argv[0]);
        return -1;
    }

    FILE *file = fopen(argv[1], "a");
    if (file == NULL) {
        printf("Error: could not open file.\n");
        return -1;
    }

    char input[100];
    while (1) {
        printf("Enter a string: ");
        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = 0; 

        if (strcmp(input, "-1") == 0) {
            break;
        }

        fprintf(file, "%s\n", input);
    }

    fclose(file);
    return 0;
}
