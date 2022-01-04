#include "stdio.h"

void insertionSort(int arr[],int arrSize){
    int i; //For outer loop
    int j; // for swapping data
    int temp; // to stored data temporary

    for(i=1; i<arrSize ; i++){ //outer loop
        j=i;
        while ( j > 0 && arr[j-1]> arr[j]){ // inner loop
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
    printf("Sorted Data :");
    for(i=0; i < arrSize ; i++){
        printf("%d ",arr[i]);
    }

}

int main(){

    int arr[]={9,7,8,5,6,3,2,1};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,arrSize);
    return 0;

}
