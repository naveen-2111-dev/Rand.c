//insertion sort
// stack push activity
//add elements to the missing place

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

struct Elements
{
    int *array1;
    int *array2;
}E;

struct stack
{
    struct Elements Ele[MAX_SIZE];
    int top;
};

int sort(int arr[],int n){
    int sortedArray[n];
    int size = n;

    for (int i = 0; i < size; i++){
        sortedArray[i] = arr[i];
    }
    // sorter
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (sortedArray[j] > sortedArray[j + 1])
            {
                int temp = sortedArray[j];
                sortedArray[j] = sortedArray[j + 1];
                sortedArray[j + 1] = temp;
            }
        }
    }
    printf("\nsorted array: ");
    for (int a = 0; a < size; a++)
    {
        printf("%d |",sortedArray[a]);
    }
}
int Generated(int GenTop){
    for (int i = 1; i < GenTop+1; i++){
        E.array2[i] = i;
    }
    return 1;
}
int display(int total){
    printf("generated: ");
    for(int i = 0; i < total; i++){
        printf(" %d |", E.array2[i]);
    }
}

int UserArrayElement(int Limit){
    printf("Numbers: ");
    for(int i = 0; i < Limit; i++){
        printf(" %d |", E.array1[i]);
    }
}
int ArrayElements(int totalNumbers){

    printf("enter numbers you know! from 1 / - to break: ");
    getchar();
    for (int i = 0; i <= totalNumbers-1; i++){
        scanf("%d",&(E.array1[i]));
        if(E.array1[i]>totalNumbers){
            printf("the number cannot be greater than the range enter number within - %d\n", totalNumbers);
            return 0;
        }
    }
    UserArrayElement(totalNumbers);
    printf("\n");
    Generated(totalNumbers);
    display(totalNumbers);
    sort(E.array1,totalNumbers);
}
int getInput(){
    int n;
    printf("enter the practice range: ");
    scanf("%d", &n);
    E.array1 = malloc(n * sizeof(int));
    E.array2 = malloc(n * sizeof(int));

    //checking the memory is allocated or not
    if(E.array1 == NULL && E.array2 == NULL){
        printf("memory allocation failed");
        return 0;
    }
    ArrayElements(n);
    return 1;
}

void main(){
    getInput();
}