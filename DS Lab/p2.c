// write a program to search for a string in a sentence. The sentence is stored in a file. If multiple occurance of the string is found inside the sentence, find the count & delete the strings except the first one

#include<stdio.h>
#include<string.h>

int main() {
    FILE *fp = fopen("sentence.txt", "r");
    FILE *temp = fopen("temp.txt", "w");

    char key[50], compare[50];
    printf("Enter the string to be found: ");
    gets(key);
    int keyLength = strlen(key), count = 0;
    int i=0;
    while(!feof(fp)) {
        fgets(compare, keyLength+1, fp);
        if(feof(fp)){ 
            fseek(fp, i, SEEK_SET);
            char remaining;
            while(1){
                remaining = fgetc(fp);
                if(feof(fp)) break;
                fputc(remaining, temp);
            }
            break;
        }
        if(strcmp(key, compare) == 0) {
            count++;
            if(count == 1) {
                fprintf(temp, "%s", compare);
            }
            i+=keyLength-1;
        }
        else {
            fputc(compare[0], temp);

        }
        i++;
        fseek(fp, i, SEEK_SET);
    }
    fclose(fp);
    fclose(temp);
    remove("sentence.txt");
    rename("temp.txt", "sentence.txt");
    printf("'%s' occurs %d times in the file", key, count);
    return 0;
}