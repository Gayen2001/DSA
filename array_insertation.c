#include<stdio.h>

void traversal(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int insertation(int capacity,int *arr,int size,int index,int element){
    if (size>=capacity){
        return -1;
    }
    else{
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
    }
    arr[index]=element;
    return 1;
}
int main(){
    int capacity=100000;
    int arr[capacity];
    int size, index,element;
    printf("Enter the size of array:");
    scanf("%d",&size);
    printf("Enter the element of array:\n");
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("your given array is:\n");
    traversal(arr,size);
    printf("Enter the position or index number where you new element are insert:\n");
    scanf("%d",&index);
    printf("Enter the element which is inserted in the array");
    scanf("%d",&element);
    insertation(capacity,arr,size,index,element);
    size+=1;
    traversal(arr,size);

    return 0;

}