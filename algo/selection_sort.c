#include <stdio.h>

#define True 0
#define False 1
#define MAX 50

void swap(int *ip, int *jp){
    int temp = *ip;
    *ip = *jp;
    *jp = temp;
}

void selection_sort(int arr[], int size){
    int min_index;

    for (int i = 0; i<size; i++){
        min_index = i;
        for (int j = i+1; j<size; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
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

    selection_sort(arr, size);

    printf("\n");
    for (int i = 0; i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
