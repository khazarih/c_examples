#include <stdio.h>

#define True 0
#define False 1
#define MAX 50

//void swap(int *ip, int *jp){
//    int temp = *ip;
//    *ip = *jp;
//    *jp = temp;
//}

void insertion_sort(int arr[], int size){
    int element;
    for (int i = 1; i<size; i++){
        element = arr[i];
        int j = i - 1;
        while (j >=0 && arr[j] > element)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = element;
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

    insertion_sort(arr, size);

    printf("\n");
    for (int i = 0; i<size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
