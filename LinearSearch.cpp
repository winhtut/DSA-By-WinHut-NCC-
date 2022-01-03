#include "iostream"
using namespace std;

int  linearSearch(int nums[],int arrSize,int key){

    int i=0;
    for(i=0; i<arrSize ; i++){
        if(nums[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){
    //                                               low                      High
    int nums[]={2,5,10,11,15,16,17,19,25,30,40};
    int key=0;
   cout<<"please enter a number to find:";
   cin>>key;

    int arrSize = sizeof(nums)/sizeof(nums[0]);

    int foundIndex = linearSearch(nums,arrSize,key);
    if(foundIndex != -1){
        printf("We found data at index : %d \n",foundIndex);
        printf("Data is :%d",nums[foundIndex]);
    } else{
        printf("We cannot found");
    }


    return 0;
}
