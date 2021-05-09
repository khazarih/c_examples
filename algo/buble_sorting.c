#include <stdio.h>

#define True 0
#define False 1
#define MAX 50

void swap(int *ip, int *jp){
    int temp = *ip;
    *ip = *jp;
    *jp = temp;
}

void buble_sort(int arr[], int size){
    for (int i = 0; i<size-1;i++){
        int swapped = False;
        for (int j = 0; j<size-i-1; j++){
            if (arr[j] > arr[j+1]){
                swapped = True;
                swap(&arr[j], &arr[j+1]);
            }
        }
        if (swapped == False){
            break;
        }
    }
}

int main()
{
    int arr[MAX], size;
    
    printf("Please enter size of array: \n");
    scanf("%d", &size);
    printf("Enter digits by spaces\n");
    
    for (int i = 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    buble_sort(arr, size);

    printf("\n");
    for (int i = 0; i<size;i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
