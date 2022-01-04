#include "stdio.h"
void bubbleSort(int arr[],int arrSize){
    int i;
    int j;// for index Number
    int temp;//temp is for swap data
    for(i =0 ; i<arrSize ; i++){ // outer loop
    int data = arrSize-i-1;
        for(j=0; j< data ; j++ ){ // for swap data and for less looping 

            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted data:");
    for(i=0; i<arrSize ; i++){
        printf("%d ",arr[i]);
    }
}
int main(){

    int arr[]={9,7,8,5,6,3,2,1};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,arrSize);

    return 0;
}
