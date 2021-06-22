#include<stdio.h>
#include<string.h>

void main() {
    char a[10][100], temp[100];
    int i, j, n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    printf("Enter %d strings: \n", n);
    n++;
    for(i = 0; i < n; i++)
        gets(a[i]);
    for(i = 0; i < n-1; i++)
        for(j = 0; j <n-i-1; j++)
            if(strcmp(a[j],a[j+1]) > 0){
                strcpy(temp, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], temp);
            }
    
    printf("Sorted strings: \n");
    for(i = 0; i < n; i++)
        printf("%s\n", a[i]);
    
    printf(a[0]);
}
