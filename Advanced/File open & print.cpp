#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *fptr;
    char ch;
    char fname[100];
    printf("Enter the file name:");
    scanf("%s", fname);

    fptr = fopen(fname, "r");

    if (fptr == NULL) {
        printf("Error: could not open file %s", fname);
        exit(1);
    }

    printf("The content of %s:\n", fname);
    ch = fgetc(fptr);
    while (ch != EOF) {
        printf("%c", ch);
    }
    fclose(fptr);
    printf("\n File reading complete");
    return 0;
}