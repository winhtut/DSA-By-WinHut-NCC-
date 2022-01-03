#include "iostream"
#include "cmath"

using namespace std;

int jumpSearch(int array[],int size , int key){
    int start=0;
    int jumpSize = sqrt(size); // how we should jump
    while(array[jumpSize] <= key && jumpSize<size){
        start=jumpSize;//for linear search
        jumpSize += sqrt(size);
        if(jumpSize > size-1){ // index number
            jumpSize = size;// array size
        }
    }
    for( int i = start ; i< jumpSize ; i++){
        if(array[i]==key){
            return i;
        }
    }
    return -1;
}

int main() {

    int nums[] = {2, 5, 10, 11, 15, 16, 17, 19, 25, 30, 40};
    int key = 0;
    cout << "please enter a number to find:";
    cin >> key;


    int arrSize = sizeof(nums) / sizeof(nums[0]);
    int foundIndex = jumpSearch(nums, arrSize, key);
    if (foundIndex != -1) {
        printf("We found data at index : %d", foundIndex);
    } else {
        printf("We cannot found");
    }
}
