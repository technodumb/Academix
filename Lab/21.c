#include<stdio.h>
#include<stdlib.h>

// Open a text input file and count number of characters, words and lines in it; and store the results in an output file.


int main()
{
    FILE *input, *output;
    char ch, fname[1024];
    int char_count = 0, word_count = 0, line_count = 0;
    printf("Enter the filename: ");
    scanf("%s", fname);
    input = fopen(fname, "r");
    output = fopen("output.txt", "w");
    if (input == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }
    while ((ch = fgetc(input)) != EOF)
    {
        char_count++;
        if (ch == ' ' || ch == '\n') word_count++;
        if (ch == '\n') line_count++;
    }
    printf("Number of characters: %d\n", char_count);
    fprintf(output, "Number of characters: %d\n", char_count);
    printf("Number of words: %d\n", word_count);
    fprintf(output, "Number of words: %d\n", word_count);
    printf("Number of lines: %d\n", line_count);
    fprintf(output, "Number of lines: %d\n", line_count);
    fclose(input);
    fclose(output);
    printf("\nThe output has been stored in 'output.txt'\n\n");
    return 0;
}
