#include<stdio.h>

//display the in  the screen
void display(int *arr,int n){
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

// To search a key to be deleted
int findElement(int arr[], int n, int key);
 
// Function to delete an element
int deleteElement(int arr[], int n, int key)
{
    // Find position of element to be deleted
    int pos = findElement(arr, n, key);
 
    if (pos == -1) {
        printf("Element not found! please Enter valid element!.....\n");
        return n;
    }
 
    // Deleting element
    int i;
    for (i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    return n - 1;
}
 
// Function to implement search operation
int findElement(int arr[], int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
 
    return -1;
}
int main(){
    int arr[1000];
    int n,i,key;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the element of the array:\n");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is........................\n");
    display(arr,n);
    printf("Choose in given array which element you can delete:\n");
    scanf("%d",&key);
    n=deleteElement(arr,n,key);
    printf("After delete .......the array is.....................\n");
    display(arr,n);
    return 0;
}