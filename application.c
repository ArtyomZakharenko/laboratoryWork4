
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ** CreateArray (int *);
void FillArray (char **, int);
void ShowArray (char **, int);
void SortArray (char **, int);

int main()
{
    int amountOfStrings;
    char ** array = CreateArray(&amountOfStrings);
    FillArray(array, amountOfStrings);
    ShowArray(array, amountOfStrings);
    SortArray(array, amountOfStrings);
    ShowArray(array, amountOfStrings);
    
    return 0;
}

char ** CreateArray(int * size){
    char ** arr = NULL;
    int i;
    printf("Enter amount of strings: ");
    scanf("%d", size);
    printf("\n");
    
    arr = (char **)calloc(*size, sizeof(char *));
    
    return arr;
}

void FillArray(char ** arr, int size){
    int i;
    
    for(i = 0; i < size; i++){
        printf("Enter string %d: ", i+1);
        scanf("%ms", &arr[i]);
    }
    printf("\n");
}

void ShowArray (char ** arr, int size){
    int i;
    printf("Your array:\n");
    for (i = 0; i < size; i++){
        puts(arr[i]);
    }
    printf("\n");
}

void SortArray (char ** arr, int size){
    int i,j;
    char temp[25];
    printf("Sorting...\n");
    for (i = 0; i < size-1; i++){
        for (j = i+1; j < size; j++){
            if (atoi(arr[i]) < atoi(arr[j])){
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[i]);
                strcpy(arr[i], temp);
            }
        }
    }
}
