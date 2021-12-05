// we have 2 files a and b. Search th eleements of the file A in file B. Find its occurance and store the data and its occurance to the third file C

#include<stdio.h>
#include<string.h>

int main() {
    FILE *fileA, *fileB, *fileC;
    fileA = fopen("A.txt", "r");
    fileB = fopen("B.txt", "r");
    fileC = fopen("C.txt", "w");

    if(!fileA || !fileB || !fileC) {
        printf("Error opening file");
        return 1;
    }

    char a[100], b[100];
    int count = 0;
    while(!feof(fileA)){
        fscanf(fileA, "%s", a);
        if(feof(fileA)) break;
        count=0;
        fseek(fileB, 0, SEEK_SET);
        while(!feof(fileB)){
            fscanf(fileB, "%s", b);
            if(!strcmp(a, b)){
                count++;
            }
        }
        if(count){
            fprintf(fileC, "%s --> %d\n", a, count);
            if(count)
                printf("%s --> %d\n", a, count);
        }
    }
        printf("Output has been stored in the file C.txt");

    fclose(fileA);
    fclose(fileB);
    fclose(fileC);
}